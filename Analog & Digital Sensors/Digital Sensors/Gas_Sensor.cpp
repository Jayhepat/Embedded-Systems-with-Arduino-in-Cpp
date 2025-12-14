int LEDPin = 13;
int BUZZERPin = 3;
const int gas = 0;
int MQ2pin = A0;

void setup() {
  Serial.begin(9600);          // Initialize serial communication at 9600 baud rate
  pinMode(LEDPin, OUTPUT);     // Set LED pin as output
  pinMode(BUZZERPin, OUTPUT);  // Set Buzzer pin as output
}

void loop() {
  float sensorValue;
  sensorValue = analogRead(MQ2pin);  // Read the analog value from gas sensor
  Serial.println(sensorValue);       // Print the sensor value to the serial monitor

  // Check if the sensor value exceeds the threshold
  if (sensorValue >= 470) {
    digitalWrite(LEDPin, HIGH);    // Turn on the LED
    tone(BUZZERPin, 1000);         // Sound the buzzer at 1000 Hz
  } else {
    digitalWrite(LEDPin, LOW);     // Turn off the LED
    noTone(BUZZERPin);             // Turn off the buzzer
  }
  delay(500);  // Wait for 500 milliseconds before reading the sensor value again
}
