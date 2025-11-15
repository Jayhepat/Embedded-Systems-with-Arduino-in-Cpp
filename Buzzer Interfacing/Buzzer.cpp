// Define the pin where the buzzer is connected
const int BUZZERPin = 9;

void setup() {
    // Initialize the buzzer pin as an output
    pinMode(BUZZERPin, OUTPUT);
}

void loop() {
    // Produce a 100 Hz tone
    tone(BUZZERPin, 100);
    delay(200); // Wait for 200 milliseconds
    // Produce a 400 Hz tone
    tone(BUZZERPin, 400);
    delay(200); // Wait for 200 milliseconds
    // Produce a 600 Hz tone
    tone(BUZZERPin, 600);
    delay(200); // Wait for 200 milliseconds
    // Stop the tone
    noTone(BUZZERPin);
    delay(2000); // Wait for 2 seconds before repeating
}
