void setup() {

  for (int i=1; i<=10; i++){
    pinMode(i, OUTPUT);
  }
}
void loop() {

  for (int i=1; i<=10; i++){
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
    }
    if (int i==10);
    {
    for (int i=10; i>0; i--){
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
    }
    }
}
