#include <Servo.h>
Servo myServo;

const int potPin = A0; // Analog pin for pot
const int threshold = 512; // Threshold for detecting rain
const int pirSensorPin = 2; // Digital pin for PIR sensor
const int ledPin = 3; // Digital pin for LED

void setup() {
  myServo.attach(9); // Servo connected to pin 9
  pinMode(potPin, INPUT);
  pinMode(pirSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  int potValue = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  if (potValue > threshold) {
    myServo.write(0); // Close shading
  } else {
    myServo.write(90); // Open shading
  }

  // PIR sensor and LED
  int pirValue = digitalRead(pirSensorPin);
  Serial.print("PIR Sensor Value: ");
  Serial.println(pirValue);

  if (pirValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }

 delay(1000);
}