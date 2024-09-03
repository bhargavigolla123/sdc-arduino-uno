// C++ code
//
void setup()
{
 
  pinMode(5,INPUT);
  pinMode(3,OUTPUT);
}

void loop()
{
  int a= digitalRead(5);
  if(a==1)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
}