int number1;
char sign;
int number2;
int result;
char integers[32];
bool newData = false;
bool readyToCalculate = false;
bool readyToPrint = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  cleanData();
  parseData();
  calculate();
  concatenateResultsAndPrint();
}

void cleanData() {
  int count = 0;
  while (Serial.available() > 0) {
    newData = true;
    if (isDigit(Serial.peek()) == true) {
      integers[count] = Serial.parseInt();
      count++;
      delay(1);
    }
    else if (isGraph(Serial.peek()) == true) {
      sign = Serial.read();
      delay(1);
    }
    else {
      Serial.read();
      delay(1);
    }
  }
}
void parseData() {
  if (newData == true) {
    number1 = integers[0];
    number2 = integers[1];
    newData = false;
    readyToCalculate = true;
  }
}
void calculate() {
  if (readyToCalculate == true) {
    switch (sign) {
      case '+':
        result = number1 + number2;
        readyToPrint = true;
        break;
      case '-':
        result = number1 - number2;
        readyToPrint = true;
        break;
      case '*':
        result = number1 * number2;
        readyToPrint = true;
        break;
      case '/':
        result = number1 / number2;
        readyToPrint = true;
        break;
      default:
        Serial.println("This operation is not supported. Please try again.");
        readyToPrint = false;
        break;
    }
    readyToCalculate = false;
    readyToPrint = true;
  }
}

void concatenateResultsAndPrint() {
  if (readyToPrint == true) {
    String printCalculation = String(number1) + ' ' + String(sign) + ' ' + String(number2) + String(" = ") + String(result);
    Serial.println(printCalculation);
    readyToPrint = false;
    number1 = ' ';
    number2 = ' ';
    sign = ' ';
  }
}
