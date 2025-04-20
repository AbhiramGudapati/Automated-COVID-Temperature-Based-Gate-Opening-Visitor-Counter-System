const int ProxSensor = A0;
int inputVal = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(ProxSensor, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(ProxSensor) == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  inputVal = analogRead(ProxSensor);
  Serial.println(inputVal);
  delay(1000);
}
