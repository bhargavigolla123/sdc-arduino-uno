# include<Servo.h>
Servo s;
void setup()
{
  s.attach(7);
  pinMode(8,INPUT);
}

void loop()
{
 int a = digitalRead(8);
  if (a == 1)
  {
    for(int i=0; i<=180; i++)
    {
      s.write(i);
      delay(10);
    }
     for(int i=180; i>=180; i--)
    {
      s.write(i);
      delay(10);
    }
  }
  else
  {
    s.write(0);
  }
}