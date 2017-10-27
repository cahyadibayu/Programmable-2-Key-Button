#include <Keyboard.h>
int But1 = 16; // the pin can be everywhere
int But2 = 14;
int LED = 9;
int LED2 = 10;

void setup() {
  
pinMode(But1,INPUT);
pinMode(But2,INPUT);
pinMode(LED,OUTPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  
if (digitalRead(But1) == HIGH )
{
  Keyboard.press('z');  // the key is for you to choose
  digitalWrite(LED,HIGH);
}
else
{
  Keyboard.release('z');
  digitalWrite(LED,LOW);
}
if (digitalRead(But2) == HIGH )
{
  Keyboard.press('x'); // the key is for you to choose
  digitalWrite(LED2,HIGH);
}
else
{
  Keyboard.release('x');
  digitalWrite(LED2,LOW);
}
}
