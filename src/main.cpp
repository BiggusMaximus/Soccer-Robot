#include <Arduino.h>
#include "motor.h"
#include "pid.h"
#include "serialCom.h"

void setup()
{
  Serial.begin(9600);
  motor_innit();
}

void loop()
{
  read_serial();
}