int numberOfDice;
bool rollOn = false;
bool diceroll = false;
bool mainMenuOn = false;
bool question = false;
long randNumber1;
long randNumber2;
long randNumber3;
long randNumber4;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void howManyDice() {
  Serial.println("How many dice would you like to roll? Choose an integer from 1 to 4.");
  while (rollOn == false) {
    while (Serial.available() > 0) {
      if (isDigit(Serial.peek()) == true) {
        numberOfDice = Serial.parseInt();
        delay(1);
        rollOn = true;
      }
      else if (numberOfDice > 5) {
        Serial.println("Invalid. Choose an integer from 1 to 5.");
        Serial.read();
        delay(1);
        rollOn = true;
      }
      else {
        Serial.read();
        delay(1);
        rollOn = true;
      }
    }
  }
  diceroll = true;
}

void rollDice() {
  randNumber1 = random(1, 7);
  randNumber2 = random(1, 7);
  randNumber3 = random(1, 7);
  randNumber4 = random(1, 7);
  while (diceroll == true) {
    while (rollOn == true) {
      if (numberOfDice == 1) {
        Serial.println(randNumber1);
        delay(1);
        rollOn = false;
        diceroll = false;
        mainMenuOn = true;
        break;
      }
      if (numberOfDice == 2) {
        Serial.println(randNumber1);
        Serial.println(randNumber2);
        delay(1);
        rollOn = false;
        diceroll = false;
        mainMenuOn = true;
        break;
      }
      if (numberOfDice == 3) {
        Serial.println(randNumber1);
        Serial.println(randNumber2);
        Serial.println(randNumber3);
        delay(1);
        rollOn = false;
        diceroll = false;
        mainMenuOn = true;
        break;
      }
      else if (numberOfDice = 4) {
        Serial.println(randNumber1);
        Serial.println(randNumber2);
        Serial.println(randNumber3);
        Serial.println(randNumber4);
        delay(1);
        rollOn = false;
        diceroll = false;
        mainMenuOn = true;
        break;
      }
      else {
        Serial.println("Invalid");
        delay(1);
        rollOn = false;
        diceroll = false;
        mainMenuOn = true;
        break;
      }
    }
  }
}

void mainMenu() {
  String set;
  while (mainMenuOn == true) {
    Serial.println("Roll Again?");
    question = true;
    while (question == true) {
      while (Serial.available() > 0) {
        set = Serial.readString();
        delay(1);
        Serial.println(set);

        if (set == "yes") {
          rollOn = false;
          diceroll = false;
          mainMenuOn = false;
          question = false;
        }
        else if (set == "no") {
          Serial.println("Thank you for your usage");
        }
      }
    }
  }
}

void loop() {
  howManyDice();
  rollDice();
  mainMenu();
}
