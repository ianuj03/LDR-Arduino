/*
 * This program is used to read the value from LDR and put it on the LCD display.
 * Author: Anuj Jain
 * @ianuj03
 */
#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
const int LDR=A0;
const int led=8;
float ldr_value,total_value,lux;
void setup(){
  pinMode(LDR,INPUT);
  pinMode(led,OUTPUT);
  lcd.begin(16,2);
}
void loop(){
  ldr_value=analogRead(LDR);
  total_value=ldr_value*0.0048828125;
  lux=(2500/total_value-500)/10;
  lcd.setCursor(0,0);
  lcd.print("Intensity:");
  lcd.setCursor(0,1);
  lcd.print(lux);
  lcd.print(" lumens.");
  analogWrite(led,lux);
  delay(500);
  //digitalWrite(led,0);
}
