#pragma once

#define USB_POLLING_INTERVAL_MS 1

#define MATRIX_ROWS 1
#define MATRIX_COLS 5


#define HE_PINS { GP16, GP17, GP18, GP19 }
#define HE_KEY_COUNT 4

#define ENC_SW_PIN GP2

#define HE_ACTUATION_POS   60   // first press point
#define HE_RESET_POS       20   // below this = fully released, re-arms
#define HE_RT_PRESS_DELTA  10   // rapid-trigger re-press distance
#define HE_RT_RELEASE_DELTA 10  // rapid-trigger release distance
#define HE_MIN_RANGE       150  // min assumed (bottom - rest) in ADC counts
#define HE_FILTER_SHIFT    1    // EMA: f += (raw-f) >> shift

// Print raw/filtered ADC over the QMK console every 100 ms
#define HE_DEBUG
