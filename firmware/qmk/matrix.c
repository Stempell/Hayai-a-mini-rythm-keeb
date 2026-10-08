#include "quantum.h"
#include "analog.h"
#include "timer.h"
#include "print.h"

static const pin_t he_pins[HE_KEY_COUNT] = HE_PINS;

typedef struct {
    int16_t rest;      // ADC value with key released
    int16_t bottom;    // largest ADC value seen (key fully pressed)
    int16_t filt;      // filtered ADC value
    uint8_t pos;       // travel 0..255
    uint8_t peak;      // highest pos since press
    uint8_t trough;    // lowest pos since release
    bool    armed;     // true once key has returned below RESET_POS
    bool    down;
} he_key_t;

static he_key_t keys[HE_KEY_COUNT];

static uint8_t calc_pos(he_key_t *k) {
    int32_t range = k->bottom - k->rest;
    if (range < HE_MIN_RANGE) range = HE_MIN_RANGE;
    int32_t p = ((int32_t)(k->filt - k->rest) * 255) / range;
    if (p < 0) p = 0;
    if (p > 255) p = 255;
    return (uint8_t)p;
}

static void update_key(he_key_t *k) {
    uint8_t pos = k->pos;
    if (!k->down) {
        if (pos <= HE_RESET_POS) {
            k->armed  = true;
            k->trough = pos;
        } else if (pos < k->trough) {
            k->trough = pos;
        }
        bool first = k->armed && pos >= HE_ACTUATION_POS;
        bool rt    = !k->armed && pos > HE_RESET_POS && (pos - k->trough) >= HE_RT_PRESS_DELTA;
        if (first || rt) {
            k->down  = true;
            k->peak  = pos;
            k->armed = false;
        }
    } else {
        if (pos > k->peak) k->peak = pos;
        if (pos <= HE_RESET_POS || (k->peak - pos) >= HE_RT_RELEASE_DELTA) {
            k->down   = false;
            k->trough = pos;
            k->armed  = (pos <= HE_RESET_POS);
        }
    }
}

void matrix_init_custom(void) {
    gpio_set_pin_input_high(ENC_SW_PIN);

    // Rest calibration: average 32 samples. Keep keys released at power-up.
    for (uint8_t i = 0; i < HE_KEY_COUNT; i++) {
        int32_t sum = 0;
        for (uint8_t n = 0; n < 32; n++) {
            sum += analogReadPin(he_pins[i]);
            wait_ms(1);
        }
        keys[i].rest   = sum / 32;
        keys[i].bottom = keys[i].rest + HE_MIN_RANGE;
        keys[i].filt   = keys[i].rest;
        keys[i].armed  = true;
    }
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    matrix_row_t row = 0;

    for (uint8_t i = 0; i < HE_KEY_COUNT; i++) {
        he_key_t *k  = &keys[i];
        int16_t  raw = analogReadPin(he_pins[i]);

        k->filt += (raw - k->filt) >> HE_FILTER_SHIFT;
        if (k->filt > k->bottom) k->bottom = k->filt;   // auto-learn bottom-out

        k->pos = calc_pos(k);
        update_key(k);
        if (k->down) row |= ((matrix_row_t)1 << i);
    }

    if (!gpio_read_pin(ENC_SW_PIN)) row |= ((matrix_row_t)1 << 4);

#ifdef HE_DEBUG
    static uint32_t last = 0;
    if (timer_elapsed32(last) > 100) {
        last = timer_read32();
        uprintf("HE raw/pos: %d/%u %d/%u %d/%u %d/%u\n",
                keys[0].filt, keys[0].pos, keys[1].filt, keys[1].pos,
                keys[2].filt, keys[2].pos, keys[3].filt, keys[3].pos);
    }
#endif

    bool changed = (current_matrix[0] != row);
    current_matrix[0] = row;
    return changed;
}
