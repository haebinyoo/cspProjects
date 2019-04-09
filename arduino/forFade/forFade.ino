void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) {
    analogWrite(9, lightValue);
    Serial.println(lightValue);
    delay(10);
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) {
    analogWrite(9, lightValue);
    Serial.println(lightValue);
    delay(10);
  }
}
