void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
  
}

void loop() {
  long randNumber;
  boolean stop_if;
  stop_if = false;
  randNumber = random(1, 7);
  Serial.println(randNumber);

  delay(1000);

  Serial.println("Roll Again?");
  while (Serial.available () > 0) {
  
  }
  String command;
  if (command == "Yes") {
    Serial.println(randNumber);
  }
  else if (command == "No") {
    stop_if = true;
    return stop_if;
  }
}
