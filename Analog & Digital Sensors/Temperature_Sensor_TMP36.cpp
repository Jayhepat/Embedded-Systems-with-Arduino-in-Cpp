int baseTemp = 0;
int celsius = 0;
int fahrenheit = 0;

void setup() {
  pinMode(A0, INPUT); // Set the analog pin A0 as input for TMP36 sensor
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  pinMode(2, OUTPUT); // Set pin 2 as output for LED1
  pinMode(3, OUTPUT); // Set pin 3 as output for LED2
  pinMode(4, OUTPUT); // Set pin 4 as output for LED3
}

void loop() {
  baseTemp = 29; 
  celsius = map((analogRead(A0) * 5.0) / 1023.0, 0, 1023, -40, 125);
  
  // Convert Celsius to Fahrenheit
  fahrenheit = ((celsius * 9) / 5) + 32;
  
  // Print temperature readings to serial monitor
  Serial.print(celsius);
  Serial.print("C, ");
  Serial.print(fahrenheit);
  Serial.println("F");
  
  // Control LEDs based on temperature
  if (celsius < baseTemp) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (celsius > baseTemp && celsius < baseTemp + 15) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (celsius > baseTemp + 15 && celsius < baseTemp + 25) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else if (celsius > baseTemp + 25) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  
  delay(1000); // Wait for 1 second before taking next reading
}
