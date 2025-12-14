int sensorState = 0; // Variable to store the state of the sensor
int LEDPin = 13;     // Pin for the LED
int PIRSensor = 2;   // Pin for the PIR sensor

void setup() {
  Serial.begin(9600);     // Initialize serial communication at 9600 baud rate
  pinMode(PIRSensor, INPUT);  // Set PIR sensor pin as input
  pinMode(LEDPin, OUTPUT);    // Set LED pin as output
}

void loop() {
  // Read the state of the sensor/digital input
  sensorState = digitalRead(PIRSensor);  
  Serial.println(sensorState);  // Print the sensor state to the serial monitor

  // Check if sensor pin is HIGH. If it is, set the LED on.
  if (sensorState == HIGH) {
    digitalWrite(LEDPin, HIGH);  // Turn on the LED
  } else {
    digitalWrite(LEDPin, LOW);   // Turn off the LED
  }

  delay(10);  // Short delay before the next reading
}
