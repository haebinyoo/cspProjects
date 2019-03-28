void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//begin the serial
  Serial.setTimeout(10);
  pinMode(13, OUTPUT);
  Serial.println("Good Morning");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();
    command.trim();
    if (command == "On") {
      Serial.println("When type On, the light is on");
        digitalWrite(13, HIGH);
        Serial.println("The light is on");
    }
      else if (command == "Off") {
        Serial.println("When type Off, the light is off"); 
          digitalWrite(13, LOW);
          Serial.println("The light is off");
      }

  }  }
