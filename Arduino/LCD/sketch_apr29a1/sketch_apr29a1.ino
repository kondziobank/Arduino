#include<LiquidCrystal.h>
#include<Servo.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int servoPin = 6; //pin sterujący
Servo servo;
int servoAngle = 0; //pozycja startowa serwa w stopniach
void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
}
void loop() {
  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Jestem glupi");
  lcd.setCursor(5, 1);
  lcd.print("");


  servo.write(180);
  delay(500);
  servo.write(1);
  delay(500);
  servo.write(180);
}
