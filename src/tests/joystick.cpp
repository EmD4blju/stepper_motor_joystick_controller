#include <Arduino.h>
#include <Joystick.h>
#include <definitions.h>

Joystick joystick = Joystick(VRx, VRy, SW);

void setup(){
    Serial.begin(9600);
    Serial.println("Calibrating joystick...");
    delay(5000);
    Serial.println("Calibration finished");
}

void loop(){
    int x_axis = analogRead(VRx);
    int y_axis = analogRead(VRy);
    int z_axis = digitalRead(SW);
    
    Serial.print("X: ");
    Serial.print(x_axis);
    Serial.print("\tY: ");
    Serial.print(y_axis);
    Serial.print("\tZ: ");
    Serial.print(z_axis);

    Serial.println();

    delay(10);
}