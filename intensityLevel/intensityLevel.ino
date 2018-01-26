/*
 * This program is used to show different intensity level by glowing different number of lights. 
 * Author: Anuj Jain
 * @ianuj03
 */
const int kLED[10]={2,3,4,5,6,7,8,9,10,11};
const int kLDR=A3;
void setup()
{
  for(int i=0;i<10;i++)
    pinMode(kLED[i],OUTPUT);
  pinMode(kLDR,INPUT);
}
void loop()
{
  int i;
  int sensorValue=analogRead(kLDR);
  if(sensorValue<100){
    digitalWrite(kLED[0],1);
    for(i=1;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<200){
    for(i=0;i<2;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<300){
    for(i=0;i<3;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<400){
    for(i=0;i<4;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<500){
    for(i=0;i<5;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<600){
    for(i=0;i<6;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<700){
    for(i=0;i<7;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<800){
    for(i=0;i<8;i++)
      digitalWrite(kLED[i],1);
    for(;i<10;i++)
      digitalWrite(kLED[i],0);
  }
  else if(sensorValue<900){
    for(i=0;i<9;i++)
      digitalWrite(kLED[i],1);
    digitalWrite(kLED[i],0);
  }
  else
    for(i=0;i<10;i++)
      digitalWrite(kLED[i],1);
}
