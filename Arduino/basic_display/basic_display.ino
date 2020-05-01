#include <LiquidCrystal.h>
LiquidCrystal lcd(5,4,3,2,1,0);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(10,OUTPUT);
  
}

void loop() {
 


  digitalWrite(10,HIGH);
  lcd.setCursor(0,0);
  lcd.print("LED is on");
  delay(2000);


  digitalWrite(10,LOW);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("LED is off");
  delay(2000);


  
  lcd.clear();
 
  

}
