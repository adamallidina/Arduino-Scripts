#include <LiquidCrystal.h>

String string = "Well this works";
int incomingByte = 0;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  printHigh(string);
}

void loop() {
  if (Serial.available() > 0) {
	// read the incoming byte:
	incomingByte = Serial.read();
	
	// say what you got:
	Serial.print("I received: ");
	Serial.print(incomingByte);
	Serial.println(incomingByte, DEC);
	
	printInt(incomingByte);
	delay(500);
	lcd.clear();
  }
}

void printLow(String str){
  lcd.setCursor(0, 1);
  lcd.print(str);
}

void printHigh(String str){
  lcd.setCursor(0, 0);
  lcd.print(str);
}
