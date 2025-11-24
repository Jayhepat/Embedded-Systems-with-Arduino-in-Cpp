void setup(){
  Serial.begin(9600);  //Initialize serial communication at 9600 bits per second 
}

void loop(){
  int sensorReading = analogRead(A0);
  Serial.println(sensorReading);

  //map the sensor reading to (0 to 1023) to a pitch Range (300 to 3000Hz)
  int outputPitch = map(sensorReading, 0, 1023, 300, 3000);
  tone(8, outputPitch); //play a tone on pin 8 at the time of mapped frequency

  delay(1000);
}
