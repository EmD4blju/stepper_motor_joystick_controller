#include <Arduino.h>
#include <Stepper.h>
#include <definitions.h>


Stepper stepper = Stepper(STEPS_PER_REVOLUTION, IN1, IN2, IN3, IN4);

void setup() {
  Serial.begin(9600);
  delay(5000);
  Serial.println("Board ready");
}

void loop() {
  stepper.setSpeed(500);
  stepper.step(50);
}