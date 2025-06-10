
#include "Motor.hpp"

Motor::Motor() {
}

void Motor::status() {
  Serial.write("Motor is ON\n");
}