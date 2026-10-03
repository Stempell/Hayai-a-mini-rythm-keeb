# Schematic and initial pcb design
After some trial, error and deviously long time looking for the right ips panel (asking guys on reddit came in handy as always) I completed the schematic and the initial pcb design.
   As for the parts i suppose they will remain unchanged but im sure the arrangement of them on the board will as i move on to designing the case for it, especially the ips panel bescause i just put it somewhere in the middle without a care in the world :P. I had to make my own footprint and symbol for the 8pin 0,5mm pich ZIF connector (i did not find any online :cc ) but at least now i know how to make these right? Arranging everything on the board is fairly easy given the space i have. Seriously - running a straight trace across the whole board has never been more refreshing after doing a pi pico devboard project!

<img width="800" height="551" alt="obraz" src="https://github.com/user-attachments/assets/9e3cc80f-071d-4322-8e13-2f83586f2a87" />
<img width="800" height="461" alt="obraz" src="https://github.com/user-attachments/assets/a07f8f54-e783-4edd-bffd-0cde0ce15ea0" />





# I fancy an upgrade, so lets start over 
After some thought, i decided to upgrade the regular mechanical switches
 to hall effect magnetic ones. That of course requires them to be hooked
 up to analog pins. But I already wired everything and stuff and the adc pins are on the opposite side of the board so it would really be a mess dragging them all the way so i decided to start over and redo the pcb. I also made a custom footprint for the switches i wanna use (the gateron magnetic jade Air HE's).

<img width="596" height="484" alt="obraz" src="https://github.com/user-attachments/assets/0876fce7-fbaf-4b8d-bff4-fd5846aa1817" />





# PC crashed, lost my work :C
so unfortunaly my pc crashed and i lost almost all work on the pcb, wchich was weird bescause i could have sworn i've been saving my progress regurarly. But we don't cry over spilled milk do we? I started over and made the pcb again it was easier as i just needed to redo it from memory. still have some silkscreen art to do tho.

<img width="800" height="468" alt="obraz" src="https://github.com/user-attachments/assets/5ccaa613-26fa-4e98-84a1-a550892c717f" />





# Case plates finished!
And with that, the whole project, i think. I took inspiration for the casing method from the sayo device with the pcb "sandwitched" between these plates. mine will be made from acrylic and im still thinking about priting some designs on top of the top plate and maybe making the bottom plate transparent but we'll think about that later. Only thing left is some double checks, finishing up the repository and i think we're ready to submit! 
(btw i never told you but Hayai means swift in japanese :>)

<img width="800" height="405" alt="obraz" src="https://github.com/user-attachments/assets/4563c175-eef0-41a9-aa98-b7700ca055c9" />
<img width="800" height="302" alt="obraz" src="https://github.com/user-attachments/assets/643a09cd-e33c-40c7-9064-9ebd4a22cd4b" />
<img width="800" height="409" alt="obraz" src="https://github.com/user-attachments/assets/7d95fe7a-74e8-4b14-be69-d69483d44a22" />
<img width="800" height="390" alt="obraz" src="https://github.com/user-attachments/assets/c33dc196-2cf7-45f4-ad93-a9d50bfc5554" />





# Added mounting holes
i decided on a system where 4 holes will be occupied by screws attached from both sides to a female to female spacer, and the other 4 by dowel pins to prevent the plates from wobbling sideways. i'll adjust the hole sizes later when im ordering exact pins and screws

<img width="800" height="449" alt="obraz" src="https://github.com/user-attachments/assets/dce5c6ac-9037-438c-9925-0fc4314e394c" />
<img width="800" height="489" alt="obraz" src="https://github.com/user-attachments/assets/ce5ac772-4d60-4254-a305-2264d7086d04" />





# PCBA IS TOO EXPENSIVE
I looked over the pcb assembly costs and boy were they high. So high in fact, that it exceeds the max funding for the tier hayai falls into. to reduce assembly costs, i decided to use a microcontroller module instead of the chip. I used a rp2350 zero from waveshare and rerouted the whole board (and also expanded the borders a bit). Im a bit frustrated about the whole thing bescause the project was like 99% ready to submit and now i gotta do so many things all over again but it is what it is.

<img width="800" height="459" alt="obraz" src="https://github.com/user-attachments/assets/19be02f2-b5a0-4a68-acbe-51b7221a31f6" />
<img width="800" height="673" alt="obraz" src="https://github.com/user-attachments/assets/b6bdb6f4-711e-4a0a-89ca-09ebfdcba7e2" />





# moving the zif connector and OnShape issues
### we're not sqishing the cable anymore 
Soooo i realised, that when assembling the whole thing, the fpc connector would only have like 1,5mm of space under the panel and that is WAAAY to little for it to not break so i had to lay it flat on the pcb and move the zif connector behind the mcu pins. 
 ### time for some bad news
When i tried to import the new board design into onshape for assembly, it spewed out an error that the step file coud not be translated. I thought to myself - fine just try again. Same thing happened so i started troubleshooting:
-gaps in edge-cuts? No
-corrupted models? Nope
-weird design? Nu uh, tried to import a plain rectangle and nothing changed.
-Kicad issues? Wrong, dropped a 3d model from a website, still couldn't translate
The worst thing about it was that it wasn't just the .step format that could not be translated by onshape. I tried stl, 3mf, gbl - the result was still the same. I ran out of ideas so i decided to switch to a different cad program (onshape failed to export the existing models too, so my work there is unaccesable now. Thanks ig) and face my worst fear - Autodesk Fusion. I hate this software for the dephts of my pure soul. this program is REALLY overengineered for me and my skills and all the tools, mechanics and functions are too complicated for me to handle and end up working against me and themselves. I had to redo all of the plates inside a program which I despise. I was so frustrated i forgot to log some hours. After a long work session I managed to finish them. You can see the results of my hard work below. Oh and we hit the 20 hour mark with this one!

<img width="800" height="261" alt="obraz" src="https://github.com/user-attachments/assets/7734184d-1eae-4cf3-8484-d05e13e0a93e" />
<img width="795" height="536" alt="obraz" src="https://github.com/user-attachments/assets/a87d9c07-1fa5-4953-9176-0e36b1cb6aaa" />
<img width="800" height="501" alt="obraz" src="https://github.com/user-attachments/assets/e8aeec8f-80fa-4f80-ba82-6f6f8b6c1bb7" />











