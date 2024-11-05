void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT_PULLUP); //input_pullup allows more exact value for the resistor
  pinMode(8, INPUT_PULLUP);
  //use INPUT_PULLUP whenever we are connected to a switch
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalRead(pin)//checks to see if input pin is reading high or low, returning TRUE (1) or FALSE (0)
  if(digitalRead(9)==LOW){
    digitalWrite(5, HIGH);
  }
  
  if(digitalRead(8)==LOW){
    digitalWrite(5, LOW);
  }
}
