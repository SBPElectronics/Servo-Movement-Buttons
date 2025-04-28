#include <ESP32Servo.h>

Servo myServo;

const int buttonPin1 = 32; // Choose any GPIO you like
const int buttonPin2 = 33; // Another GPIO

int servo_movement = 0;

void setup() {
  myServo.attach(18); // Servo signal wire
  Serial.begin(112500);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin1) == LOW) { // Button 1 pressed
    servo_movement = servo_movement - 5;
    if (servo_movement < 0) {
      servo_movement = 0;
    }
    myServo.write(servo_movement); // Move servo
    Serial.println("BUTTON 1 LOW");
    delay(200); // Simple debounce
  }

  if (digitalRead(buttonPin2) == LOW) { // Button 2 pressed
    servo_movement = servo_movement + 5;
    if (servo_movement > 180) {
      servo_movement = 180;
    }
    myServo.write(servo_movement); // Move servo
    Serial.println("BUTTON 2 LOW");
    delay(200); // Simple debounce
  }
}
