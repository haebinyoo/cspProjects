//the integer of the lightValue is 0 and the integer of the 
//delta is 1 begin the serial and the mode will be #9 when 
//the lightValue is less than 0 or more than 255 the
//delta is going to be negative so when is reaches its limit,
//the number is going to go down or up and it will keep 
//going in a loop and send the output to both the serial
//monitor and to the LED and wait for 10 milliseconds.

int lightValue = 0;
int delta = 1;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {

  lightValue = lightValue + delta;
  if (lightValue <= 0 || lightValue >= 255)  {
    delta = -delta;
  }
  analogWrite(9, lightValue);
  Serial.println(lightValue);
  delay(10);
}
