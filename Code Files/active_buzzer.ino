int buzzerPin = 11;
void setup() {
  pinMode(buzzerPin, OUTPUT);
  beep(50);
  beep(50);
  delay(1000);
}
void loop() {
  beep(50);
  delay(1000);
}
void beep(unsigned char delayms) {
  analogWrite(buzzerPin, 20);
  delay(delayms);
  analogWrite(buzzerPin, 0);
  delay(delayms);
}
