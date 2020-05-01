int state;

void setup() {
  // put your setup code here, to run once:
pinMode (13,OUTPUT);
pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(3);
  digitalWrite(13,state);

}
