<img width="1512" height="375" alt="Banner" src="https://github.com/user-attachments/assets/ae262bbc-e0ca-400b-b9d7-6ae2d6b1f0b7" />

Hayai is a Mini keyboard for shortcuts and playing rythm games. It features 4 magnetic hall effect switches (each with an rgb underglow LED) a rotary encoder and an 0.96" IPS display.
The display is connected by a FPC cable to a ZIF socket. custom footprints are in the kicad files.
the whole thing runs on a rp2040.
The initial model looks something like this:

<img width="795" height="536" alt="Zrzut ekranu 2026-09-20 222539" src="https://github.com/user-attachments/assets/446e6363-7887-4ddc-bec2-c28ca34a4040" />

## Schematic
<img width="1090" height="762" alt="image" src="https://github.com/user-attachments/assets/60a5aaad-1169-473d-87b9-97c8ccac47d0" />

## PCB
<img width="1000" height="572" alt="image" src="https://github.com/user-attachments/assets/3b0f2a1e-ae28-4388-ba84-686b4b1d0174" />

dimensions of the pcb(and the acrylic plates) are 81,5 x 45mm.

debug pins on top of the board, next to a screwhole:

<img width="1226" height="505" alt="image" src="https://github.com/user-attachments/assets/e018497b-506e-4157-8bab-dce5ed0818e2" />

## Casing method
I took inspiration from the sayo device with the casing method with the pcb being sandwitched between the plates. I decided on a system where 4 holes will be occupied by screws attached from both sides to a female to female spacer, and the other 4 by dowel pins to prevent the plates from wobbling sideways.

<img width="1242" height="675" alt="image" src="https://github.com/user-attachments/assets/f903d5b3-6482-4edb-a8f5-572718f0a266" />

## Bill of materials

| # | Item                                  | Quantity |
| - | ------------------------------------- | -------: |
| 1 | Custom PCB                            |        1 |
| 2 | Acrylic plates                        |        4 |
| 3 | GATERON Magnetic Jade Air HE Switches |        4 |
| 4 | Keycaps                               |        4 |
| 5 | 0.96" IPS TFT ST7735 display          |        1 |
| 6 | EC11 20mm switch rotary encoder       |        1 |
| 7 | Encoder cap                           |        1 |


## BIll of materials for the pcba assembly

| Designator | Comment | Footprint | JLCPCB Part # | Manufacturer | Mfr Part # | Description | Lib Type | Qty | Price ($) |
|---|---|---|---|---|---|---|---|---|---|
| C17 | 10uF | 0402 | [C15525](https://jlcpcb.com/partdetail/16204-CL05A106MQ5NUNC/C15525) | Samsung Electro-Mechanics | CL05A106MQ5NUNC | 10uF 6.3V X5R ±20% MLCC | Basic | 2 | 0.0512 |
| C18,C19,C20,C21,C22,C24,C25,C26,C27 | 0.1uF | 0402 | [C1525](https://jlcpcb.com/partdetail/1877-CL05B104KO5NNNC/C1525) | Samsung Electro-Mechanics | CL05B104KO5NNNC | 100nF 16V X7R ±10% MLCC | Basic | 18 | 0.0810 |
| D1,D2,D3,D4 | SK6812MINI-E | LED_SK6812MINI-E_3.2x2.8mm_P1.5mm_ReverseMount | [C5149201](https://jlcpcb.com/partdetail/OPSCOOptoelectronics-SK6812MINIE/C5149201) | OPSCO Optoelectronics | SK6812MINI-E | SMD RGB LED (Built-in IC) | Extended | 0 | 0.0000 |
| R5 | 18Ω | 0402 | [C25084](https://jlcpcb.com/partdetail/25827-0402WGF180JTCE/C25084) | UNI-ROYAL (Uniroyal Elec) | 0402WGF180JTCE | Thick Film Resistor ±1% | Extended | 20 | 0.0480 |
| R7 | 10kΩ | 0402 | [C25744](https://jlcpcb.com/partdetail/26487-0402WGF1002TCE/C25744) | UNI-ROYAL (Uniroyal Elec) | 0402WGF1002TCE | Thick Film Resistor ±1% | Basic | 2 | 0.0068 |
| U4 | ZIF connector, 8-pin, 0.5mm | ZIF_connector8pin0,5mm | [C2856828](https://jlcpcb.com/partdetail/XUNPU-FPC_05FB8PH20/C2856828) | XUNPU | FPC-05FB-8PH20 | FFC/FPC Connector, right-angle SMD | Extended | 2 | 0.3208 |
|
