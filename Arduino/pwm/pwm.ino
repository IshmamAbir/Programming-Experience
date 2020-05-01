int led=10;
int i;
void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for(i=0;i<=255;i=i+10)
  {
    analogWrite(led,i);
    delay(100);
    
  }

  for(i=255;i>=0;i=i-10)
  {
    analogWrite(led,i);
    delay(100);
    
  }

}
