#include <Servo.h> 
Servo shadingServo; 
int ldrPin = A0; // LDR connected to analog pin 0 
int buttonPin = 2; // Push button connected to digital pin 2 
int threshold = 500; // Threshold for sunlight intensity 
void setup() { 
shadingServo.attach(9); // Attach the servo on pin 9 
pinMode(buttonPin, INPUT); 
Serial.begin(9600); 
} 
void loop() { 
int ldrValue = analogRead(ldrPin); 
Serial.println(ldrValue); 
if (ldrValue > threshold) { 
shadingServo.write(0); // Deploy shading mechanism 
} else { 
shadingServo.write(90); // Retract shading mechanism 
} 
if (digitalRead(buttonPin) == HIGH) { 
shadingServo.write(45); // Manual control position 
} 
}
