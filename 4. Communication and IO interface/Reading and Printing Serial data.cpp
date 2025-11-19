char mystr[20];

void setup(){
  Serial.print(9600);
}

void loop(){
  //Raeds the serial data and store in variable
  Serial.readBytes(mystr, 20);
  //Prints data on serila monitor
  Serial.println(mystr);
  //delay of 1 second.
  delay(1000);
}
