#include <Servo.h>

Servo servo;

int const potPin = A0;
int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.print("\n");
  // Convert the potentiometer data to usable numbers
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print("angle: ");
  Serial.print(angle);
  Serial.print("\n");

  // Move Servo
  servo.write(angle);
  delay(15);
}
