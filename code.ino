//trig=6;
//echo=5;
float duration, distance;
void setup()
{
 Serial.begin(9600);
 pinMode(6,OUTPUT);
 pinMode(5,INPUT);
}

void loop()
{
 digitalWrite(6,LOW);
 delayMicroseconds(2);
 digitalWrite(6,HIGH);
 delayMicroseconds(2);
 
 duration=pulseIn(5,HIGH);
 distance=(duration/2)*0.0343;
 
 Serial.print("\ndistance= ");
  if(distance>=400|| distance<=2)
  {
    Serial.print("*\nOUT OF RANGE*");
  }
  else{
    Serial.print(distance);
    Serial.print("cm");
    delay(500);
      }
 delay(5000);
}
