#include <Servo.h>

#define SERVO_PIN 9
#define SWITCH_PIN 13

Servo servo;

void setup()
{
  servo.attach(SERVO_PIN);
  pinMode(SWITCH_PIN, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(SWITCH_PIN))
  {
    servo.write(0);
  }
  else
  {
    servo.write(90);
  }
  delay(100);
}
