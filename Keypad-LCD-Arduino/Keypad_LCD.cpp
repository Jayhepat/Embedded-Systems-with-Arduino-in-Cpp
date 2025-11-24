#include<Keypad.h>
#include<LiquidCrystal.h>

//Initialize LCD with the umber of interface _Pins
const int rs=12, en = 11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//Define the Keypad layout
const byte ROWS = 4;
const byte COLS = 4;
char Keys[ROWS][COLS] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'},
};

byte rowPins[ROWS] = {6, 7, 8, 9};       //Connect to the row pins of the keypad
byte colPins[COLS] = {A0, A1, A2, A3};   //Connect to the col pins of the keypad

//create the keypad object
Keypad keypad = keypad(makekeymap(key), rowPins, colPins, ROWS, COLS);

void setup(){
   //Initialize the LCD
  lcd.begin(16, 2);
  lcd.print("Enter:");
}

void loop(){
  char Key = keypad.getKeys();

if(Key){
      //Print the Key values on the LCD
lcd.SetCursor(6,0);
lcd.print(Key);
delay(500);   //Delay for the readability
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Enter:");
}
}

