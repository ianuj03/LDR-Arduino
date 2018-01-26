/*
 * This is a prototype for the smart light system, where as per the requirement the state of the light is to be changed.
 * Author: Anuj Jain
 * @ianuj03
 */
const int kled=9;
const int kldr=A3;
int i;
void setup()
{
  pinMode(kled,OUTPUT);
  //Serial.begin(9600);
}

void loop()
{
  i=analogRead(kldr);
  //------Check the intensity level to which you want to do the operation on the appliance-----
  //Serial.println(i);
  //delay(500);
  //i=map(i,0,1023,0,255);
  
  if(i<30)
    digitalWrite(kled,HIGH);
  else
    digitalWrite(kled,LOW);
}
