void setup() 
{
    //Serial.begin(115200);
    pinMode(3,OUTPUT);
    //tone(3,40000);
}

void loop() 
{
  tone(3,40000);
  delay(10);
  noTone(3);
  delay(10);
}