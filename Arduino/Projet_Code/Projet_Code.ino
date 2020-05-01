#include <LiquidCrystal.h>
LiquidCrystal lcd(1,2,3,4,5,6);
int led=0;
int trigger = 8, echo = 7 ;
int buzzer = 9;
float duration,distance,cm;




void setup() {
  
  lcd.begin(16,2);
  pinMode(led,OUTPUT);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}



void loop() {

  digitalWrite(trigger,LOW);
  delay(10);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  duration = pulseIn(echo,HIGH);  
  distance =(duration * 0.034)/2; //duration in cm ={(340m/s)*100cm}/1000000 miliSec
  
  //lcd.setCursor(starting point on lcd ex 0,4)
  //lcd.print("ekhane msgboshbe")
  
  if(distance<10)
  {
    lcd.setCursor(0,0);
    lcd.print("totally full");
    lcd.setCursor(1,0);
    lcd.print("Collect garbages");
    
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    
  }


  
  else if(distance<30)
  {
    lcd.setCursor(0,0);
    lcd.print("Over 80% full");
    
    digitalWrite(led,HIGH);
    delay(100);
    digitalWrite(led,LOW);
    delay(100);
    
  }

  

  else
  {

    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
    
  }

  delay(1000);
  lcd.clear();

 

}
