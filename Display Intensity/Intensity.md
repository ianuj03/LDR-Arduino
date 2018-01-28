# Display Intensity

 Let lux be the intesnity of light then,
 
 > lux = (2500 / total_value - 500) / 10
 
 where total_value = analogValue * 0.0048828125
 
 ### Components:
 Name | Quantity
 -----|---------
 LDR | 1
 Resistor 270 ohm | 1 
 LCD | 1 (optional)
 Breadboard | 1
 Jumper Wire | 3 + 11
 Arduino Board* | 1
 Resistor 10k Ohm | 1 (if LCD used)

 
 *Any Arduino Board will work
 ### Connection:
 ##### LDR: 
 ```
 Connect one leg of the LDR to +5V;
 On the other end make a common connection such that,
 Through a 270ohm Resistor connect it to ground and also connect the same leg to any one Analog PIN.
 ```
 ##### LCD: 
 ```
 VSS- Connect it to the ground;
VDD/Vcc- Connect it to the 5V from the board;
VO/VEE- Used to vary the contrast using a potentiometer, Connect it to the centre of the potentiometer and the other two as Vcc and GND; or connect to a 10k Ohm resistor.
R/W- Connect it to the Ground;
RS- Connect it to any digital PIN;
E- Connect it to any digital PIN;
D4-D7: Connect all these four pins to different digital PINS;
A- Connect it to 5V of the board; and
K- Connect it to the GND of the board.
```
