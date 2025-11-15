// Pin definitions
const int RED_LED = 13;
const int YELLOW_LED = 12;
const int GREEN_LED = 11;
const int BUZZER = 7;

// Frequency definitions (in Hz)
const int RED_TONE = 500;    // Tone for Red LED
const int YELLOW_TONE = 1000; // Tone for Yellow LED
const int GREEN_TONE = 1500;  // Tone for Green LED

void setup() {
    // Set LED pins as OUTPUT
    pinMode(RED_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    pinMode(BUZZER, OUTPUT);
}

void loop() {
    // Turn on Red LED and play tone
    digitalWrite(RED_LED, HIGH);
    tone(BUZZER, RED_TONE); // 500 Hz
    delay(1000); // Delay for 1 second
    digitalWrite(RED_LED, LOW);
    noTone(BUZZER); // Turn off the buzzer

    delay(500); // Delay between tones

    // Turn on Yellow LED and play tone
    digitalWrite(YELLOW_LED, HIGH);
    tone(BUZZER, YELLOW_TONE); // 1000 Hz
    delay(1000); // Delay for 1 second
    digitalWrite(YELLOW_LED, LOW);
    noTone(BUZZER); // Turn off the buzzer

    delay(500); // Delay between tones

    // Turn on Green LED and play tone
    digitalWrite(GREEN_LED, HIGH);
    tone(BUZZER, GREEN_TONE); // 1500 Hz
    delay(1000); // Delay for 1 second
    digitalWrite(GREEN_LED, LOW);
    noTone(BUZZER); // Turn off the buzzer

    delay(500); // Delay before repeating the loop
}
