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
  Serial.println(i);
  //delay(500);
  //i=map(i,0,1023,0,255);
  if(i<30)
    digitalWrite(kled,HIGH);
  else
    digitalWrite(kled,LOW);
 
 //delay(100);
}
