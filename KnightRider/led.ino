//you can review the project at https://wokwi.com/projects/357406714203345921

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  int delta = analogRead(A0);

  for (int i = 0; i < 8; i++) {
    digitalWrite(i, HIGH);
    int delta = analogRead(A0);
    delay(delta);
    digitalWrite(i, LOW);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(i, HIGH);
    int delta = analogRead(A0);
    delay(delta);
    digitalWrite(i, LOW);
  }
}
