int IR_remote = 0;

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud rate
  pinMode(7, OUTPUT);       // Set digital pin 7 as an output for the LED
  pinMode(3, INPUT);        // Set digital pin 3 as an input for the IR sensor
}

void loop() {
  IR_remote = digitalRead(3);  // Read the value from the IR sensor
  Serial.println(IR_remote);   // Print the sensor value to the serial monitor

  if (IR_remote == LOW) {      // Check if the IR sensor detects a signal
    digitalWrite(7, HIGH);     // Turn the LED on
    delay(1000);               // Wait for 1000 milliseconds (1 second)
    digitalWrite(7, LOW);      // Turn the LED off
    delay(1000);               // Wait for 1000 milliseconds (1 second)
  } else {
    digitalWrite(7, LOW);      // Ensure the LED is off if no signal is detected
  }
}
