# Hayai-a mini rythm keeb
Hayai is a Mini keyboard for shortcuts and playing rythm games. It features 4 magnetic hall effect switches (each with an rgb underglow LED) a rotary encoder and an 0.96" IPS display.
The display is connected by a FPC cable to a ZIF socket. custom footprints are in the kicad files.
the whole thing runs on a rp2040.
The initial model looks something like this:

<img width="1062" height="706" alt="image" src="https://github.com/user-attachments/assets/438b99a7-3fd9-4cde-94dc-068e13f1ee69" />

## Schematic
<img width="1090" height="762" alt="image" src="https://github.com/user-attachments/assets/60a5aaad-1169-473d-87b9-97c8ccac47d0" />

## PCB
<img width="1000" height="572" alt="image" src="https://github.com/user-attachments/assets/3b0f2a1e-ae28-4388-ba84-686b4b1d0174" />

dimensions of the pcb(and the acrylic plates) are 81,5 x 45mm.

debug pins on top of the board, next to a screwhole 

<img width="1226" height="505" alt="image" src="https://github.com/user-attachments/assets/e018497b-506e-4157-8bab-dce5ed0818e2" />

## Casing method
I took inspiration from the sayo device with the casing method with the pcb being sandwitched between the plates. I decided on a system where 4 holes will be occupied by screws attached from both sides to a female to female spacer, and the other 4 by dowel pins to prevent the plates from wobbling sideways.

<img width="951" height="458" alt="Zrzut ekranu 2026-09-09 220117" src="https://github.com/user-attachments/assets/2d4b11d7-16f5-4998-89f7-d71027818288" />

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






