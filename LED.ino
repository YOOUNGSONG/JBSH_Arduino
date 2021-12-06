int LightIntensity;

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH){
    LightIntensity = LightIntensity + 10;
    if(LightIntensity > 255){
      LightIntensity = 255;
    }
  }
  if(digitalRead(3) == HIGH){
    LightIntensity = LightIntensity - 10;
    if(LightIntensity < 0){
      LightIntensity = 0;
    }
  }
  for(int i=9; i<12; i++){
    analogWrite(i, LightIntensity);
    delay(10);
  }
}
