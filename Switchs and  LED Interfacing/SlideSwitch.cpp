const byte LED = 13;
const byte SW = 2;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT);
}

void loop(){
  boolean val = digitalRead(SW); //Read he state of pin 2

  if(val){                   //Idf the switch is off
    digitalWrite(LED, HIGH); // Turn on the LED
  } else {
    digitalWrite(LED, LOW); // Turn off the LED
  }
}
