#include "motor.h"

void setup()
{
  Serial.begin(9600);
  motor_innit();
}

void loop()
{
  tes_motor();
}