<img width="2002" height="535" alt="Banner3" src="https://github.com/user-attachments/assets/f9d0fc65-6770-4a09-b0ad-f4a13ea1d2dd" />

Hayai is a Mini keyboard for shortcuts and playing rythm games. It features 4 magnetic hall effect switches (each with an rgb underglow LED) a rotary encoder and an 0.96" IPS display.
The display is connected by a FPC cable to a ZIF socket. custom footprints are in the kicad files.
The whole thing runs on a rp2040.

Here's how it looks:
<img width="1920" height="1080" alt="Hayai" src="https://github.com/user-attachments/assets/c6f5848d-2f18-46ad-b077-f3a48aa15d3f" />

Hayai is desing around the Gateron magnetic jade air he dimensions but you can really use any magnetic switch you want, thanks to it's easy hotswap 

<img width="560" height="491" alt="obraz" src="https://github.com/user-attachments/assets/43812685-af49-425c-ac2f-12254cfbec08" />

## Schematic
<img width="1302" height="747" alt="Zrzut ekranu 2026-09-25 191601" src="https://github.com/user-attachments/assets/a589784b-7950-4c7b-a39d-c74daf382c26" />

## PCB
<img width="1143" height="685" alt="obraz" src="https://github.com/user-attachments/assets/4df17d6b-3030-4349-85b7-48fad660b898" />

dimensions of the pcb(and the acrylic plates) are roughly 84,5 x 48,7mm.

## Casing method
I took inspiration from the sayo device with the casing method with the pcb being sandwitched between the plates. I decided on a system where 4 holes will be occupied by screws attached from both sides to a female to female spacer, and the other 2 by dowel pins to prevent the plates from wobbling sideways.

<img width="907" height="414" alt="Zrzut ekranu 2026-09-25 234834" src="https://github.com/user-attachments/assets/84275001-f564-47fb-a347-0e84b400643d" />

The pcb sits inbetween the two middle plates with cutouts for components and pins

## Assembly
To assemble Hayai you'll need to follow these 4 simple steps:
1. Solder on all of the necesary components (you will have a bit less work to do if you choose pcba) The mcu can come with header pins pre-soldered on so you can make your job a bit easier for a like a dollar
2. Connect the display via the fpc cable with the panel facing upwards from the pcb and lay it flat on the board.
3. Sandwitch the pcb between the plates (look at the 3d model if you need some guidance) and put M3 dowel pins into the middle holes on the sides.
4. put M2 standoffs into the corner holes and screw them in with M2. this should hold the plates together. You can also add washers under the screws so it holds the plates better, M3 should fit.

Have fun! C:

## Bill of Materials

| # | Item | Quantity | Price | Link |
|---:|---|---:|---:|---|
| 1 | Custom PCB | 1 | ~$22.87 | [JLCPCB](https://jlcpcb.com/) |
| 2 | Acrylic plates | 4 | ~$18.04 | [Elecrow](https://www.elecrow.com/) |
| 3 | GATERON Magnetic Jade Air HE Switches | 4 | $15.00 | [GATERON](https://pl.aliexpress.com/item/1005005513800132.html?mp=1&pdp_npi=6%40dis%21PLN%21PLN+10.38%21PLN+5.19%21%21PLN+5.19%21%21%21%4021613be817913114503443671e1002%2112000033370341350%21ct%21PL%216850984236%21%211%210%21&gatewayAdapt=glo2pol) |
| 4 | Keycaps of choice | 4 | $1.34 | [AliExpress](https://pl.aliexpress.com/item/4000473863693.html) |
| 5 | 0.96" IPS TFT ST7735 display | 1 | $1.62 | [BuyDisplay](https://www.buydisplay.com/0-96-inch-mini-color-tft-lcd-display-module-80x160-ips-tft-st7735) |
| 6 | EC11 20mm switch rotary encoder with mounting plates (the cap i chose fits the one with a plum handle) | 1 | $1.38 | [AliExpress](https://pl.aliexpress.com/item/1005007644083514.html) |
| 7 | Encoder cap of choice | 1 | $3.24 | [AliExpress](https://pl.aliexpress.com/item/1005008583446552.html) |
| 8 | Waveshare RP2350-Zero Mini Development Board Female | 1 | $5.79 | [Waveshare](https://www.waveshare.com/rp2350-zero.htm) |
| 9 | 1x9 pin header for microcontroller | 2 | $2.45 | [AliExpress](https://tinyurl.com/3yzm8hka) |
| 10 | DRV5056A4QDBZR (SOT-23-3) | 4 | $3.36 | [JLCPCB](https://jlcpcb.com/partdetail/TexasInstruments-DRV5056A4QDBZR/C2152902) |
| 11 | Brass standoffs (M2, 13mm) | 4 | $3.28 | [AliExpress](https://pl.aliexpress.com/item/1005012002279754.html) |
| 12 | Dowel pins (M3, 14mm) | 4 | $4.11 | [AliExpress](https://pl.aliexpress.com/item/4000473863693.html) |
| 13 | M2 screws, can also add washers | 4 |  |  |
| 14 | SK6812-MINI-E LEDs | 4 | $2.01 | [AliExpress](https://pl.aliexpress.com/item/1005008308801366.html) |

Subtotal : $84.40

Note that the pcb and plates were made around these specific parts. You can experiment and switch them out for different models but i don't guarantee it'll work

## BIll of materials for the pcba assembly

| Designator | Comment | Footprint | JLCPCB Part # | Manufacturer | Lib Type | Qty | Price |
|---|---|---|---|---|---|---|---|
| C17 | 10uF | 0402 | [C15525](https://jlcpcb.com/partdetail/16204-CL05A106MQ5NUNC/C15525)| Samsung Electro-Mechanics | Basic | 2 | $0.0512 |
| C18,C19,C20,C21,C22,C24,C25,C26,C27 | 0.1uF | 0402 | [C1525](https://jlcpcb.com/partdetail/1877-CL05B104KO5NNNC/C1525) | Samsung Electro-Mechanics | Basic | 18 | $0.0810 |
| R5 | 18Ω | 0402 | [C25084](https://jlcpcb.com/partdetail/25827-0402WGF180JTCE/C25084) | UNI-ROYAL (Uniroyal Elec) | Extended | 20 | $0.0480 |
| R7 | 10kΩ | 0402 | [C25744](https://jlcpcb.com/partdetail/26487-0402WGF1002TCE/C25744) | UNI-ROYAL (Uniroyal Elec) | Basic | 2 | $0.0068 |
| U4 | ZIF connector, 8-pin, 0.5mm | ZIF_connector8pin0,5mm | [C2856828](https://jlcpcb.com/partdetail/XUNPU-FPC_05FB8PH20/C2856828) | XUNPU | Extended | 2 | $0.3208 |
|
