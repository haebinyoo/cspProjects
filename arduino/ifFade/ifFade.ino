int lightValue = 0;
int delta = 1;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  lightValue = lightValue + delta;
  if (lightValue <= 0 || lightValue >= 255) {
    delta = -delta;
  }
  analogWrite(9, lightValue);
  Serial.println(lightValue);
  delay(10);
}
