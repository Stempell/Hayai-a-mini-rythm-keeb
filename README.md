<img width="2002" height="535" alt="Banner3" src="https://github.com/user-attachments/assets/f9d0fc65-6770-4a09-b0ad-f4a13ea1d2dd" />

Hayai is a Mini keyboard for shortcuts and playing rythm games. It features 4 magnetic hall effect switches (each with an rgb underglow LED) a rotary encoder and an 0.96" IPS display.
The display is connected by a FPC cable to a ZIF socket. custom footprints are in the kicad files.
the whole thing runs on a rp2040.
The initial model looks something like this:

<img width="917" height="686" alt="Hayai_full_bulid_V1_2026-Sep-25_05-07-57PM-000_CustomizedView4685572664 — kopia" src="https://github.com/user-attachments/assets/62b792b5-54a7-4511-8491-4ba0a7650e2f" />

## Schematic
<img width="1302" height="747" alt="Zrzut ekranu 2026-09-25 191601" src="https://github.com/user-attachments/assets/a589784b-7950-4c7b-a39d-c74daf382c26" />

## PCB
<img width="1143" height="685" alt="obraz" src="https://github.com/user-attachments/assets/4df17d6b-3030-4349-85b7-48fad660b898" />

dimensions of the pcb(and the acrylic plates) are roughly 84,5 x 48,7mm.

## Casing method
I took inspiration from the sayo device with the casing method with the pcb being sandwitched between the plates. I decided on a system where 4 holes will be occupied by screws attached from both sides to a female to female spacer, and the other 4 by dowel pins to prevent the plates from wobbling sideways.

<img width="1242" height="675" alt="image" src="https://github.com/user-attachments/assets/f903d5b3-6482-4edb-a8f5-572718f0a266" />

## Bill of materials

| # | Item                                  | Quantity |
| - | ------------------------------------- | -------: |
| 1 | Custom PCB                            |        1 | https://jlcpcb.com/ |
| 2 | Acrylic plates                        |        4 | https://www.elecrow.com/ |
| 3 | GATERON Magnetic Jade Air HE Switches |        4 | https://www.gateron.com/products/gateron-magnetic-jade-air-he-switch-set?VariantsId=11190 |
| 4 | Keycaps                               |        4 |
| 5 | 0.96" IPS TFT ST7735 display          |        1 | https://www.buydisplay.com/0-96-inch-mini-color-tft-lcd-display-module-80x160-ips-tft-st7735 |
| 6 | EC11 20mm switch rotary encoder       |        1 |
| 7 | Encoder cap                           |        1 |
| 8 | Waveshare RP2350-Zero Mini Development Board Female |        1 | https://www.waveshare.com/rp2350-zero.htm?srsltid=AU7gw4XPTYZJ0hTz3AkBVXTOhI9BNq4mYxN55q8XYoP2YQ91w8zKBKgq |
| 9 | 1x9 pin header for microcontroller    |        2 | https://tinyurl.com/3yzm8hka |
| 10 | DRV5056A4QDBZR (SOT-23-3)            |        4 | https://www.digikey.com/en/products/detail/texas-instruments/DRV5056A4QDBZR/9692623 |

## BIll of materials for the pcba assembly

| Designator | Comment | Footprint | JLCPCB Part # | Manufacturer | Mfr Part # | Description | Lib Type | Qty | Price ($) |
|---|---|---|---|---|---|---|---|---|---|
| C17 | 10uF | 0402 | [C15525](https://jlcpcb.com/partdetail/16204-CL05A106MQ5NUNC/C15525)| Samsung Electro-Mechanics | CL05A106MQ5NUNC | 10uF 6.3V X5R ±20% MLCC | Basic | 2 | 0.0512 |
| C18,C19,C20,C21,C22,C24,C25,C26,C27 | 0.1uF | 0402 | [C1525](https://jlcpcb.com/partdetail/1877-CL05B104KO5NNNC/C1525) | Samsung Electro-Mechanics | CL05B104KO5NNNC | 100nF 16V X7R ±10% MLCC | Basic | 18 | 0.0810 |
| D1,D2,D3,D4 | SK6812MINI-E | LED_SK6812MINI-E_3.2x2.8mm_P1.5mm_ReverseMount | [C5149201](https://jlcpcb.com/partdetail/OPSCOOptoelectronics-SK6812MINIE/C5149201) | OPSCO Optoelectronics | SK6812MINI-E | SMD RGB LED (Built-in IC) | Extended | 0 | 0.0000 |
| R5 | 18Ω | 0402 | [C25084](https://jlcpcb.com/partdetail/25827-0402WGF180JTCE/C25084) | UNI-ROYAL (Uniroyal Elec) | 0402WGF180JTCE | Thick Film Resistor ±1% | Extended | 20 | 0.0480 |
| R7 | 10kΩ | 0402 | [C25744](https://jlcpcb.com/partdetail/26487-0402WGF1002TCE/C25744) | UNI-ROYAL (Uniroyal Elec) | 0402WGF1002TCE | Thick Film Resistor ±1% | Basic | 2 | 0.0068 |
| U4 | ZIF connector, 8-pin, 0.5mm | ZIF_connector8pin0,5mm | [C2856828](https://jlcpcb.com/partdetail/XUNPU-FPC_05FB8PH20/C2856828) | XUNPU | FPC-05FB-8PH20 | FFC/FPC Connector, right-angle SMD | Extended | 2 | 0.3208 |
|
