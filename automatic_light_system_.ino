int condition = 0;
void setup() {
  pinMode(10,OUTPUT);

}

void loop() {
  condition = analogRead(A0);
  if (condition <5){
   digitalWrite(10,HIGH); 
  }
  if (condition >5){
  digitalWrite(10,LOW);
  }
  delay(50);

}
