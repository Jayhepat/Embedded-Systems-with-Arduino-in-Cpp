char mystr[20]; // Variable to store received data
void setup() {
  // Begin the Serial communication at 9600 Baud
  Serial.begin(9600);
}
void loop() {
  // Read the serial data and store in variable
  Serial.readBytes(mystr, 20);
  // Print data on Serial Monitor
  Serial.println(mystr);
  // Delay for 1 second
  delay(1000);
}
