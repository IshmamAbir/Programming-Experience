#include <LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);

}

void loop() {
 int state;
 state= digitalRead(9);
 

 if(state==HIGH){
  digitalWrite(10,state);
  lcd.setCursor(0,0);
  lcd.print("LED is on");
  
  }

  else {
    lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("LED is off");
  
  }
  delay(500);
  lcd.clear();
 
  

}
