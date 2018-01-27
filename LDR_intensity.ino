const int LDR=A0;
float ldr_value,total_value,lux;
void setup(){
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}
void loop(){
  ldr_value=analogRead(LDR);
  total_value=ldr_value*0.0048828125;
  lux=(2500/total_value-500)/10;
  Serial.print("\nIntensity is ");
  Serial.print(lux);
  Serial.println(" lumens");
  delay(500);
}
