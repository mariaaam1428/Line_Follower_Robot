# Line_Follower_Robot
Using Arduino
Illustrate how you are going to design your line  
follower robot from hardware point of view:

 We have connected the two motors with the two wheels which are connected  
to the motor deriver in defined pins, connect the controlled pins which in  
motor driver to Arduino in PWM pins to control the speed and directions and  
connect others pins with the battery voltage, ground in Arduino and voltage  
from Arduino (5V).  
 The LCD is also connected to the Arduino.  
Theoretical background  
 The Line follower robot is a machine that can detect and follow the line  
(black) drawn on The Floor (white). Generally, the path is predefined and can  
be visible like a black line on a white surface with a high contrasted color.  
This kind of Robot should sense the line with its Infrared Ray (IR) sensors that  
installed under the robot at short distance which controlled by potentiometer.  
After that, the data is transmitted to the floor and check the color if it's white IR  
receives, but if it is black, no signal is received.  
 We can control the movement of robot based on read of IR senor and the  
controller we use here it is Arduino which controlled based on the received  
signal from sensor.  
So:  
 We can control motor signals by Arduino by its PWM pins based on IR  
sensor read.  
Taking into consideration:  
 Attention should be paid to logic conditions which control Arduino which  
controlled the geared motors based on IRs sensor signal.  
 Finally. the robot can reach the end point by following the mentioned states.
 LCD:
 Displaying the name of the team throughout the competition period (5)

Show the movement of the robot (10)

Like: START - RIGHT - LEFT - STRAIGHT - Cornering right...etc.

Show the points that the robot went through. (10)

(A, B, C, D, END) for each checkpoint.
