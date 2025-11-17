const int LEDPin1= 12;
const int LEDPin2 = 13;
const int SwitchPin1 = 2;
const int SwitchPin2 = 3;


//variables to store switch inputs
int SwitchState1 = 0;
int SwitchState2 = 0;

void setup(){
  //Initialize LED oins
  pinMode(LEDPin1, OUTPUT);
  pinMode(LEDPin2, OUTPUT);

  //Initialize Switch Pins
  pinMode(SwitchPin1, INPUT);
  pinMode(SwitchPin2, INPUT);
}

void loop(){
  SwitchState1 = digitalRead(SwitchPin1);    //Read the state of Switch 1

  if(SwitchState1 == HIGH){               
    digitalWrite(LEDPin1, HIGH);
  } else {
    digitalWrite(LEDPin1, LOW);
  }

  SwitchState2 = digitalRead(SwitchPin2);       // Read the sytate of switch 2
  
  if(SwitchState2 == HIGH){
    digitalWrite(LEDPin2, HIGH);
  } else {
    digitalWrite(LEDPin2, LOW);
  }

  delay(15);
}
