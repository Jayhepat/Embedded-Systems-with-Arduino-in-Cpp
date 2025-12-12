volatile boolean ledOn = false;
int o_BUZZERPin = 8;
int o_REDLEDPin = 13;
int o_GREENLEDPin = 4;
int i_PUSHButton = 2;

void setup(){
  pinMode (o_REDLEDPin, OUTPUT);
  pinMode (o_BUZZERPin, OUTPUT);
  pinMode (o_GREENLEDPin, OUTPUT);
  pinMode (i_PUSHButton, INPUT);
  //Turn on Green LED by Default
  digitalWrite(o_GREENLEDPin, HIGH);
  //Code partable maps the pin to interrupt vector number
  attachInterrupt(digitalPinToInterrupt(2), buttonPressed, RISING);
}

void loop(){

}
//ISR
void buttonPressed(){
  //turn the buzzer and red LED off, green LED on
  if(ledOn)
  {
    digitalWrite(o_GREENLEDPin, HIGH);
    noTone(o_BUZZERPin);
    ledOn = false;
    digitalWrite(o_REDLEDPin, LOW);
  } else {
    //Turn on RED LED and Buzzer, Green LED OFF
    digitalWrite(o_GREENLEDPin, LOW);
    //261Hz
    tone(o_BUZZERPin, 261);
    ledOn = true;
    digitalWrite(o_REDLEDPin, HIGH);
  }
}
