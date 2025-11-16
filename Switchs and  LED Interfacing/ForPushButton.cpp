 int real_val = 0;
//Initialization

void setup(){
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  real_val = digitalRead(2); //Read the state of pin 2

  if(real_val == HIGH){      //If the button is pressed
    digitalWrite(13, HIGH);  //Turn on the LED
  } else {
    digitalWrite(13, LOW);   //Turn off the LED
  }
  delay(15); //Debounce delay
}
