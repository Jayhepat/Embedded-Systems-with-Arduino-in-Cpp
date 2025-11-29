#include <Servo.h> // Include the Servo library

Servo servo1; // Create a servo object to control the servo motor
int angle = 0; // Variable to store the servo position

void setup() {
  servo1.attach(9); // Attach the servo to PWM pin 9
}

void loop() {
  // Rotate the servo from 0 to 180 degrees
  for (angle = 0; angle <= 180; angle += 1) {
    servo1.write(angle); // Set the servo to the current angle
    delay(20); // Wait for the servo to reach the position
  }
  
  // Rotate the servo from 180 to 0 degrees
  for (angle = 180; angle >= 0; angle -= 1) {
    servo1.write(angle); // Set the servo to the current angle
    delay(20); // Wait for the servo to reach the position
  }
}
