int red = 6; //assigning variables for the pins
int green = 5;
int blue = 3;
int button = 8;
int mode = 0; //Low Oxygen = 0, Normal = 1, High = 2 

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP); //setting button pin to INPUT_PULLUP
  pinMode(red, OUTPUT); //setting red, green, blue pins to output
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  digitalWrite(red, LOW); //starting the loop with red LED on, or oxygen low
  digitalWrite(green, LOW); //starting the loop with all other LEDs off
  digitalWrite(blue, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)==LOW){ //if statement for when the button is pressed
    delay(100);
    digitalWrite(red, HIGH); //turn red led on and everything else off
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH); //turn green led on and everything else off
    digitalWrite(blue, LOW);
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH); //turn blue led on and everything else off
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW); //turn blue led on and everything else off
  }
}
