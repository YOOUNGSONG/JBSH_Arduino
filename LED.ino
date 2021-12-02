int LigntIntensity;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH){
    LigntIntensity = LigntIntensity + 10;
    if(LigntIntensity > 255){
      LigntIntensity = 255;
    }
  }
  if(digitalRead(3) == HIGH){
    LigntIntensity = LigntIntensity - 10;
    if(LigntIntensity < 0){
      LigntIntensity = 0;
    }
  }
  for(int i=9; i<12; i++){
    analogWrite(i, LigntIntensity);
    delay(10);
  }
}
