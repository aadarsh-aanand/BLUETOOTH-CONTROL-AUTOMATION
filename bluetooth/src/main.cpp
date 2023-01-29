#include <Arduino.h>
char data;
void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  while (Serial.available() > 0)
  {
    data = Serial.read();
    Serial.println(data);
    if (data == 'a')
    {
      digitalWrite(13, 1);
    }
    else if (data == 'b')
    {
      digitalWrite(13, 0);
    }
    else if (data == 'c')
    {
      digitalWrite(12, 1);
    }
    else if (data == 'd')
    {
      digitalWrite(12, 0);
    }
    else if (data == 'e')
    {
      digitalWrite(11, 1);
    }
    else if (data == 'f')
    {
      digitalWrite(11, 0);
    }
    else if (data == 'g')
    {
      digitalWrite(10, 1);
    }
    else if (data == 'h')
    {
      digitalWrite(10, 0);
    }
  }
}
