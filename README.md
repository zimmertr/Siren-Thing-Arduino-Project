# Siren Thing

### Description:
This is a small program that will sound an alarm and flash the LEDs while the button is depressed. When the button is released the siren will stop.

My breadboard doesn't allow ground to travel along the entire rail so it was necessary to jump the ground along the rail to illuminate the individual LEDs. 

The ceiling value in the for loop can be modified to make the siren achieve higher or lower frequencies.

The third value in the `tone` method call within the for loop can be modified to change the duration of each element of the siren as it climbs in pitch.

### Requirements:
1x MEGA 2560  
1x Breadboard  
16x Wires  
7x 220ohm Resistors  
6x LEDs  
1x Active Speaker  
1x Push Button

### Video in Action:
[Video](https://www.youtube.com/watch?v=bVqdUNxrrhM)

### Schematic:
![Alt text](https://raw.githubusercontent.com/zimmertr/Siren-Thing-Arduino-Project/master/Schematic.jpg "Schematic")
