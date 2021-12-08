#include <LiquidCrystal.h>
#include <Servo.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);
Servo srvo1;
Servo srvo2;

void setup() {
  lcd.begin(16, 2);
  srvo1.attach(9);
  srvo2.attach(10);
}

void loop() {
  int light = analogRead(A0);
  lcd.clear();
  lcd.print("Light: ");
  lcd.print(light);
  for(int i=0; i<120; i++){
    srvo1.write(i);
    srvo2.write(i);
    delay(15);
  }
  
  delay(100);
}
