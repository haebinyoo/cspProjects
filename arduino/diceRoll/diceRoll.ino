void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  mainMenu();
}

void loop() {
  char answer;
  while (Serial.available > 0) {
    answer = Serial.readString();
    if (answer == yes)
    else mainMenu();
  }

}

void mainMenu() {
  
}
