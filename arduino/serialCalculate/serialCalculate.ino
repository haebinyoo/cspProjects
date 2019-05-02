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
    newData = true;
    if (isDigit(Serial.peek()) == true) {
      integers[count] = Serial.parseInt();
      count++;
      Serial.print("The current count is ");
      Serial.println(count);
    }
    else if (isGraph(Serial.peek()) == true) {
      sign = Serial.read();
      Serial.println(sign);
    }
    else {
      Serial.read();
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
