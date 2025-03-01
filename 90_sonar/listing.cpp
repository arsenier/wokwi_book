#include <Servo.h>

#define SONAR_ECHO 11
#define SONAR_TRIG 12

#define SERVO_PIN 9

#define RED_PIN 7
#define GREEN_PIN 6

#define ALARM_DIST 200 // [cm]

Servo servo;

void setup()
{
  pinMode(SONAR_ECHO, INPUT);
  pinMode(SONAR_TRIG, OUTPUT);

  servo.attach(SERVO_PIN);

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

int getDistanceCM()
{
  // https://docs.wokwi.com/parts/wokwi-hc-sr04

  // Start a new measurement:
  digitalWrite(SONAR_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(SONAR_TRIG, LOW);

  // Read the result:
  int duration = pulseIn(SONAR_ECHO, HIGH);
  int distanceCM = duration / 58;

  return distanceCM;
}

void loop()
{
  int distance = getDistanceCM();

  bool red_light = false;
  bool green_light = true;
  bool gate_open = true;

  if(distance < ALARM_DIST)
  {
    red_light = true;
    green_light = false;
    gate_open = false;
  }

  digitalWrite(RED_PIN, red_light);
  digitalWrite(GREEN_PIN, green_light);
  if(gate_open)
  {
    servo.write(0);
  }
  else
  {
    servo.write(90);
  }
}
