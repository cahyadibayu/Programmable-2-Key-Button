#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(7,OUTPUT);
Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8)==LOW)
{
  Keyboard.press('z');
  digitalWrite(7,HIGH);
}
else
{
  Keyboard.release('z');
  digitalWrite(7,LOW);
}
if(digitalRead(9)==LOW)
{
  Keyboard.press('x');
  digitalWrite(7,HIGH);
}
else
{
  Keyboard.release('x');
  digitalWrite(7,LOW);
}
}
