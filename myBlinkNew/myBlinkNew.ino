/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int red = 9;
int green = 10;
int blue = 11;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red, OUTPUT);
  //pinMode(pin, mode of operation)
  //pin = pin number, in this case it's using LED_BUILTIN which is built in led, connected to pin 13
  //can replace "LED_BUILTIN" parameter with 13 and it will do the same thing
  //mode of operation is either INPUT or OUTPUT
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, HIGH);  // turn the LED on (HIGH is the voltage level)
  //digitalWrite = on/off, 1 or 0, true or false, only works when the pin is an output pin
  //digitalWrite(pin, on/off)
  //pin = specialized pin to control
  // on/off = HIGH (5V) or LOW (0V)
  delay(1000);                      
  //delay(time in ms)
  digitalWrite(red, LOW);   // turn the LED off by making the voltage LOW
  //turning pin "LED_BUILTIN" to 0V
  delay(1000);  
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
  digitalWrite(blue, HIGH);
  delay(2000);
  digitalWrite(blue, LOW);
  delay(2000);           
}
