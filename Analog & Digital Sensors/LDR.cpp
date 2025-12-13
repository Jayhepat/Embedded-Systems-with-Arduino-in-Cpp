const int ledPin = 9;   // LED connected to digital pin 9
const int ldrPin = A0;  // LDR connected to analog pin A0

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
  pinMode(ldrPin, INPUT);   // Set the LDR pin as input
}

void loop() {
  int ldrValue = analogRead(ldrPin);  // Read the analog value from LDR
  Serial.println(ldrValue);  // Print the LDR value to the serial monitor
  
  if (ldrValue >= 100) {  // Check if the LDR value is greater than or equal to 100
    digitalWrite(ledPin, HIGH);  // Turn the LED on
    Serial.println("LDR is DARK, LED is ON");
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off
    Serial.println("LED OFF");
  }
  delay(100);  // Wait for 100 milliseconds before the next loop
}
