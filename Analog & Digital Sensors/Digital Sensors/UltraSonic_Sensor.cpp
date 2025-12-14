int trigPin = 10;
int echoPin = 9;
long time;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);    // Set the trigger pin as an output
  pinMode(echoPin, INPUT);     // Set the echo pin as an input
  Serial.begin(9600);          // Initialize serial communication at 9600 baud
}

void loop() {
  digitalWrite(trigPin, LOW);   // Ensure the trigger pin is low
  delayMicroseconds(2);

  // Transmit a short pulse for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo
  time = pulseIn(echoPin, HIGH);
  Serial.print("Time: ");
  Serial.println(time);

  // Calculate the distance based on the time
  distance = time * 0.0343 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000); // Add a delay to reduce the frequency of measurements
}
