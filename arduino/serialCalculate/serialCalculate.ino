int number1;
char sign;
int number2;
int result;
char integers[32];
bool newData = false;

void setup() {
  Serial.begin(9600);

}

void loop() {
  cleanData1();
  parseData();
}

void cleanData1() {
  int count = 0;
  while (Serial.available() > 0) {
    char inbound = Serial.read();
    if (isGraph(inbound)) {
      newData = true;
      integers[count] = inbound;
      count++;
    }
  }
}
void parseData() {
  if (newData == true) {
    number1 = integers[0];
    number2 = integers[1];
    Serial.println(number1);
    Serial.println(sign);
    Serial.println(number2);
    newData = false;
  }

}
