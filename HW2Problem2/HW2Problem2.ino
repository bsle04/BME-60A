int max = 1023; //max reading of analogread
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT_PULLUP); //setting analog pin to input, photocell is here
  pinMode(5, OUTPUT); //setting LED pins to output
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(5, LOW); //starting with all LEDs off
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0); //value for the reading of the analog pin / photocell
  float scaledVal = (float(val) / float(max)) * 5; //divide the analog reading by the max analog value to get a fraction/percentage, then multiplying by 5 so I can have a value scaled to voltage
  if(scaledVal < 1.0){ //if the reading is under 1V
    digitalWrite(5, HIGH); //turn one LED on and everything else off
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  if(scaledVal >= 1.0 && scaledVal < 2.0){ //if the reading is between 1 and 2 Volts
    digitalWrite(5, HIGH); //turn two LED on and everything else off
    digitalWrite(6, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  if(scaledVal >= 2.0 && scaledVal < 3.0){ //if the reading is between 2 and 3 Volts
    digitalWrite(5, HIGH); //turn three LED on and everything else off
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  if(scaledVal >= 3.0 && scaledVal < 4.0){ //if the reading is between 3 and 4 Volts
    digitalWrite(5, HIGH); //turn four LED on and everything else off
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  if(scaledVal >= 4.0 && scaledVal < 5.0){ //if the reading above 4 Volts (and below 5V)
    digitalWrite(5, HIGH); //turn all five LED on
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
}
