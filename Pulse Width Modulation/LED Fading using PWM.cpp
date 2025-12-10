// Define the LED pin and initial brightness
int ledPin = 9;       // PWM-capable pin for the LED
int brightness = 0;   // Initial brightness level
int fadeAmount = 5;   // Amount to change the brightness each loop

// Setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

// Loop function runs repeatedly
void loop() {
  // Set the brightness of the LED
  analogWrite(ledPin, brightness);

  // Change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // Wait for a short time to see the dimming effect
  delay(30);
}
