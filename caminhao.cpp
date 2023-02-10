#include <Servo.h>

Servo servo1;

int xAxis, yAxis;

void setup() {

  servo1.attach(9);

  Serial.begin(9600);

}

void loop() {

  xAxis = analogRead(A0);

  yAxis = analogRead(A1);

  xAxis = map(xAxis, 0, 1023, 0, 180);

  yAxis = map(yAxis, 0, 1023, 0, 180);

  servo1.write(xAxis);

  Serial.print("X Axis: ");

  Serial.println(xAxis);

  Serial.print("Y Axis: ");

  Serial.println(yAxis);

  delay(50);

}

