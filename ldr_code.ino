int BUZ = 2;
int F = A5;
int val=0;
void setup()
{
  pinMode(BUZ , OUTPUT);
  pinMode(F , INPUT);
  Serial.begin(9600);
}
void loop()
{ 
val  = analogRead(F);
  if (val>=600 )
  {
    digitalWrite( BUZ , HIGH);
    Serial.println(val);
  }
  else
  {
    digitalWrite(BUZ , LOW);
  }
  delay(500);
}
  
