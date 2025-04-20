int out = 11;
void setup() {
  pinMode(out, OUTPUT);
}
void loop() {
  unsigned char i;
  while (1) {
    for (i = 0; i < 80; i++) {
      digitalWrite(out, HIGH);
      delay(1);
      digitalWrite(out, LOW);
      delay(1);
    }
    for (i = 0; i < 100; i++) {
      digitalWrite(out, HIGH);
      delay(2);
      digitalWrite(out, LOW);
      delay(2);
    }
  }
}
