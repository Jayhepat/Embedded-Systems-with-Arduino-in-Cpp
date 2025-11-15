//Define the pins where the LEDs are connected
const int ledPins[] = {10, 11, 12};

//TImer delay
const int timer = 200; //200 miliseconds

void setup(){
  //Initialize each led pin as an output
  for(int thisPin = 0; thisPin < 3; thisPin++){
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop(){
  //Turn on LEDs one by one
  for(int thisPin = 0; thisPin < 3; thisPin++){
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
  //Turn the lEDs off one by one in reverse order 
  for(int thisPin = 2; thisPin>= 0; thisPin--){
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);
  }
}

// //const int ledPins[] = {10, 11, 12};: Array defining the pins connected to the LEDs.
// //pinMode(ledPins[thisPin], OUTPUT);: Initializes each LED pin as an output in a loop.
// //digitalWrite(ledPins[thisPin], HIGH);: Turns on the current LED.
// //delay(timer);: Waits for the specified time.
// digitalWrite(ledPins[thisPin], LOW);: Turns off the current LED.
// The for loops sequentially turn the LEDs on and off in both directions.
    
