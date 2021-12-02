int LigntIntensity;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop() {
  if(digitalRead(2) == HIGH){
    LigntIntensity = LigntIntensity + 10;
  }
  if(digitalRead(3) == HIGH){
    LigntIntensity = LigntIntensity - 10;
  }
  for(int i=9; i<12; i++){
    analogWrite(i, LigntIntensity);
    delay(10);
  }
}
