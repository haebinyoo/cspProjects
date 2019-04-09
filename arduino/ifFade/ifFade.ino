int lightValue = 0; // the integer of the lightValue is 0
int delta = 1; // the integer of the delta is 1

void setup() {
  Serial.begin(9600); // begin the serial
  pinMode(9, OUTPUT); // the mode will be #9
}

void loop() {
  lightValue = lightValue + delta; // lightValue add delta will equal the new lightValue
  if (lightValue <= 0 || lightValue >= 255) // when the lightValue is less than 0 or more than 255 {
    delta = -delta; // the delta will equal negative
}
analogWrite(9, lightValue); // Output lightValue to the LED
Serial.println(lightValue); // Output lightValue to the serial monitor
delay(10); // wait 1 millisecond
}
