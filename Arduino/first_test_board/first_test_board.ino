#include <LiquidCrystal.h>
LiquidCrystal lcd(1,2,3,4,5,6);
int trigger = 8;
int echo = 7 ;
int buzzer = 9;
float duration,distance,cm,inch;




void setup() {
    
  lcd.begin(16,2);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);

  
}

void loop() {
  digitalWrite(trigger,LOW);
  delay(5);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  duration = pulseIn(echo,HIGH);  
  distance =(duration * 0.034)/2; 
  inch = distance / 2.54 ;

  lcd.setCursor(0,0);
  lcd.print("Object Distance");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print("cm ");
  
  lcd.setCursor(7,1);
  lcd.print(inch);
  lcd.print("inch ");


  if(duration<30)
  {
     digitalWrite(buzzer,HIGH);
     lcd.setCursor(0,1);
     lcd.print("Obstacle in range");
    
  }
  else
  {
    digitalWrite(buzzer,LOW);
    
    
  }


  delay(1000);
  lcd.clear();
}
