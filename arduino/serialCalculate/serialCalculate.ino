int number1;
char sign;
int number2;
int result;
void setup() {
  Serial.begin(9600);

}

void loop() {
  cleanData();
}

void cleanData() {
  while (Serial.available() > 0) {
    char inbound = Serial.read();
    if (isGraph(inbound)) {
      Serial.println(inbound);
    }

  }
}
