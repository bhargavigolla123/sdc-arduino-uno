// C++ code
//
void setup()
{
 Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  digitalWrite(3,LOW);
  delayMicroseconds(2);
  digitalWrite(3,HIGH);
 delayMicroseconds(10);
  digitalWrite(3,LOW);
  long duration = pulseIn(2,HIGH);
  float distance = 0.034*duration/2;
  Serial.println(distance);
  Serial.print("cm");
}