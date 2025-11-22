#include<Wire.h>
const int pushbutton = 4;
int buttonState = 0;
int x = 0;
void setup(){
  pinMode(pushbutton, INPUT);

  //Join I2C Bus as Master
  Wire.begin();
  Serial.begin(9600);
}

void loop(){
  buttonState = digitalRead(pushbutton);
  if(buttonState == HIGH){
    x = 1;
  } else {
    x = 0;
  }
  Wire.beginTransmission(1);  //Transmit to device #1
  Wire.write(x);
  Wire.endTransmission();     //Stop transmittig
  delay(500); 
}
//--------------------------------------------------------------------------------------------//

//                       FOR SLAVE CODE
#include<Wire.h>
const int led = 4;
int x=0;
void setup(){
  pinMode(led, OUTPUT);
  //Join the I2C Bus with address #1

  Wire.begin(1);   //Initializes the Arduino as SLAve with Address 1.
  Wire.onReceive(receiveEvent);  //Sets up a function to handle incoming data.
}

void receiveEvent(int bytes){
  x = Wire.read();
  if(x == 1){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
void loop(){
  delay(20);  //Small delay to keeep the loop run smoothly
}


