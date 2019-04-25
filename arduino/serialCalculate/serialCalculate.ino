int number1;
char sign;
int number2;
int result;
char cleanData[32];
bool newData = false;

void setup() {
  Serial.begin(9600);

}

void loop() {
  cleanData1();
  printCleanData();
}

void cleanData1() {
  int count = 0;
  while (Serial.available() > 0) {
    char inbound = Serial.read();
    if (isGraph(inbound)) {
      newData = true;
      cleanData[count] = inbound;
      count++;
    }
  }
}
void printCleanData() {
  if (newData == true) {
    Serial.println(cleanData);
    char cleanData[32] = "";
    newData = false;
  }

}
