/*************************************************************************************************************************************************************/
/* File Name : LineFollower.ino                                                                                                                                        */
/* File Info. :This File contains Functionality of this Application                                                                                          */
/* Version :V1.0                                                                                                                                            */
/* Data : 20 April 2021.                                                                                                                                     */
/* Author : Mariam Awad Allah .                                                                                                                              */
/************************************************************************************************************************************************************/

#include <LiquidCrystal.h>
// define IR sensors pins:

#define   IR_RIGHT_MIDDLE      2
#define   IR_RIGHT_2           10
#define   IR_LEFT_MIDDLE       11
#define   IR_LEFT_2            13


// define Motor driver input pins:

#define first_motor1  3          // IN 1 for motor 1
#define first_motor2  5          // IN 2 for motor 1
#define second_motor1 6          // IN 1 for motor 2
#define second_motor2 9          // IN 2 for motor 2
  
// define LCD pins:

#define rs A0                     // Register select pin
#define en A1                     // Enable pin
#define d4 A2                     // Data pin 4
#define d5 A3                     // Data pin 5
#define d6 A4                     // Data pin 6
#define d7 A5                     // Data pin 7

byte Speed =  120;
/*void motorForward();
void motorRight();
void motorLeft(); */

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);





//signals of four sensors

bool Left_mid1;
bool Left2;
bool Right_mid1;
bool Right2; 




void setup() {

//for motors
pinMode(first_motor1,OUTPUT);
pinMode(first_motor2,OUTPUT);
pinMode(second_motor1,OUTPUT);
pinMode(second_motor2,OUTPUT);

//for IRs
pinMode(IR_RIGHT_MIDDLE,INPUT);
pinMode(IR_RIGHT_2,INPUT);
pinMode(IR_LEFT_MIDDLE,INPUT);
pinMode(IR_LEFT_2,INPUT);

//for  LCD
lcd.begin(16, 2);
}

void loop() {
Left_mid1=digitalRead(IR_LEFT_MIDDLE);          //read of first left sensor.. 
Left2=digitalRead(IR_LEFT_2);                  //read of second left sensor"not middle".. 
  
Right_mid1=digitalRead(IR_RIGHT_MIDDLE);      //read of first right sensor..  
Right2=digitalRead(IR_RIGHT_2);              //read of second right sensor"not middle".. 
  
//forward..
if(Left_mid1==0 && Left2==0 && Right_mid1==0 && Right2==0 ){

  motorForward();
}

if(Left_mid1==1 && Left2==1 && Right_mid1==1 && Right2==1 ){

 motorForward();
}

//right..
if(Left_mid1==0 && Left2==0 && Right_mid1==1 && Right2==0 ){

  motorRight();
}


if(Left_mid1==0 && Left2==0 && Right_mid1==0 && Right2==1 ){

  motorRight();
}

if(Left_mid1==0 && Left2==0 && Right_mid1==1 && Right2==1 ){

  motorRight();
}


//left
if(Left_mid1==1 && Left2==0 && Right_mid1==0 && Right2==0 ){

  motorLeft();
}


if(Left_mid1==1 && Left2==1 && Right_mid1==0 && Right2==0 ){

  motorLeft();
}
if(Left_mid1==0 && Left2==1 && Right_mid1==0 && Right2==0 ){

  motorLeft();
}


}


void motorForward()
{
  analogWrite(first_motor1,0);
  analogWrite(first_motor2,Speed);
  analogWrite(second_motor1,Speed);
  analogWrite(second_motor2,0);
}

//---------------------------------------------

void motorLeft()
{
  analogWrite(first_motor1,Speed);
  analogWrite(first_motor2,0);
  analogWrite(second_motor1,Speed);
  analogWrite(second_motor2,0);
}
//---------------------------------------------

void motorRight()
  {
   analogWrite(first_motor1,0);
   analogWrite(first_motor2, Speed);
   analogWrite(second_motor1,0);
   analogWrite(second_motor2, Speed);
  }
  
//---------------------------------------------
