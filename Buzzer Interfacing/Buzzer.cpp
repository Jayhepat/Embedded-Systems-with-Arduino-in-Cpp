// Define the pin where the buzzer is connected
const int BUZZERPin = 9;

void setup() {
    // Initialize the buzzer pin as an output
    pinMode(BUZZERPin, OUTPUT);
}

void loop() {
    
    tone(BUZZERPin, 100);
    delay(200); 
    
    tone(BUZZERPin, 400);
    delay(200); 
    
    tone(BUZZERPin, 600);
    delay(200);
    // Stop the tone
    noTone(BUZZERPin);
    delay(2000); 
}


// const int BUZZERPin = 9;: Specifies the pin number to which the buzzer is connected.
// pinMode(BUZZERPin, OUTPUT);: Sets the buzzer pin as an output in the setup function.
// tone(BUZZERPin, 100);: Generates a 100 Hz tone on the buzzer pin.
// delay(200);: Delays the program for 200 milliseconds.
// tone(BUZZERPin, 400);: Generates a 400 Hz tone.
// tone(BUZZERPin, 600);: Generates a 600 Hz tone.
// noTone(BUZZERPin);: Stops any tone being produced.
// delay(2000);: Delays the program for 2 seconds before the loop repeats.
