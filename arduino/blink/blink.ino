void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); //setting pin 13 to output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH); //turn on the light
  delay(1000); //wait 1 second
  digitalWrite(12, LOW); //turn off the light
  delay(2000); //wait 2 seconds
  digitalWrite(12, HIGH); //turn on the light 
  delay(3000); //wait 3 seconds
  digitalWrite(12, LOW); //turn off the light
  delay(4000); //wait 4 seconds
  digitalWrite(12, HIGH); //turn on the light
  delay(5000); // wait 5 seconds
  digitalWrite(12, LOW); //turn off the light
  delay(5000); // wait 5 seconds
  digitalWrite(12, HIGH); //turn on the light
  delay(4000); // wait 4 seconds
  digitalWrite(12, LOW); //turn off the light
  delay(3000); // wait for 3 seconds
}
