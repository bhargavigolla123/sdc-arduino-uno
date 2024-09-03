# include<Servo.h>
Servo q;
void setup()
{
  q.attach(8);
}

void loop()
{
  q.write(0);
  delay(1000);
  q.write(180);
  delay(1000);
}