void setup() {
  Serial.begin(115200);
}

void loop() {
  randNumber = random(1, 7);
  Serial.println(randNumber);

  delay(1000);
}
