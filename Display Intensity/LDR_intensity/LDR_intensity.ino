/*
 * This program is used to find the intensity of Light in surrounding and print it on the Serial Monitor 
 * Author: Anuj Jain
 * @ianuj03
 */
const int LDR=A0;
float ldr_value,total_value,lux,temp=0;
void setup(){
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}
void loop(){
  ldr_value=analogRead(LDR);
  total_value=ldr_value*0.0048828125;
  lux=(2500/total_value-500)/10;
  if(temp!=lux){
    Serial.print("\nIntensity is ");
    Serial.print(lux);
    Serial.println(" lumens");
    temp=lux;
    delay(500);
  }
}
