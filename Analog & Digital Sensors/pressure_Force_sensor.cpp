int force;
int frequency;

void setup() {
  pinMode(A0, INPUT);  // Set the force sensor pin as input
  pinMode(3, OUTPUT);  // Set the buzzer pin as output
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
}

void loop() {
  force = analogRead(A0);  // Read the analog value from force sensor
  Serial.println(force);  // Print the force value to the serial monitor
  
  frequency = map(force, 0, 1023, 50, 5000);
  
  if (frequency > 200) {
    tone(3, frequency);  // Output tone from buzzer
    Serial.print("Buzzing: ");
    Serial.println(frequency);
  } else {
    noTone(3);  // Turn off buzzer
  }
  
  delay(100);  // Wait for 100 milliseconds before the next loop
}
