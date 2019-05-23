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
      Serial.print("The current count is ");
      Serial.println(count);
      delay(1);

    }
    else if (isGraph(Serial.peek()) == true) {
      sign = Serial.read();
      Serial.println(sign);
      delay(1);
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
    readyToCalculate = true; 
  }
}
void calculate() {
  if (readyToCalculate == true) {
    Serial.println("Calculating...");
    switch (sign) {
      case '+':
        result = number1 + number2;
        readyToPrint = true;
        Serial.print("Addition");
        break;
      case '-':
        result = number1 - number2;
        readyToPrint = true;
        Serial.print("Substraction");
        break;
      case '*':
        result = number1 * number2;
        readyToPrint = true;
        Serial.print("Multiplication");
        break;
      case '/':
        result = number1 / number2;
        readyToPrint = true;
        Serial.print("Division");
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
  }
}
