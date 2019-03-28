void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //begin the serial
  Serial.setTimeout(10); //set time out
  pinMode(13, OUTPUT); //the mode will be #13
  Serial.println("Good Morning"); //print Good morning in the monitor
  Serial.println("Send 'On' to turn on the LED."); //print Send 'On' to turn on the LED in the monitor
  Serial.println("Send 'Off' to turn off the LED."); //print Send 'Off' to turn off the LED in the monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // run the program when the Serial is available
    String command; //the string to the command
    command = Serial.readString(); //command is the same thing as Serial.readString
    command.trim(); //trim the Serial.readString
    if (command == "On") { //if type 'On'
      Serial.println("When type On, the light is on"); //print that the light is on because you typed On in the monitor
      digitalWrite(13, HIGH); //light is on
      Serial.println("The light is on"); //print light is on in the monitor
    }
    else if (command == "Off") { // if type 'Off'
      Serial.println("When type Off, the light is off"); //print that the light is off because you typed Off in the monitor
      digitalWrite(13, LOW); //light is Off
      Serial.println("The light is off"); //print light is off in the monitor
    }

  }
}
