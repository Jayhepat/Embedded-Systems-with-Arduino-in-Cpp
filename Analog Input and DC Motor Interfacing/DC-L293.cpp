const int motorDriver1 = 11;
const int motorDriver2 = 10;
const int slider = 2;

int buttonSlider;

void setup(){
  pinMode(motorDriver1, OUTPUT);
  pinMode(motorDriver2, OUTPUT);
  pinMode(slider, INPUT);
}

void loop(){
  buttonSlider = digitalRead(slider);
  if(buttonSlider == HIGH){
    digitalWrite(motorDriver1, HIGH);
    digitalWrite(motorDriver2, LOW);
  } else {
    digitalWrite(motorDriver1, LOW);
    digitalWrite(motorDriver2, HIGH);
  }
  delay(1000);
}
