float speedSound = 0.034; //speed of sound given in the slides
int trig = 7; //pins for trig and echo for ultrasonic sensor
int echo = 8;

int green = 3; //pins for leds
int yellow = 4;
int red = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT); //setting pins to input or output
  pinMode(echo, INPUT_PULLUP);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600); //starts serial monitor at 9600 baud
}

void loop() {
  digitalWrite(trig, HIGH); //sends short 10ms pulse to trig pin
  delay(10);
  digitalWrite(trig, LOW);

  float travelTime = pulseIn(echo, HIGH); //measures travel time as stated in slides
  float distance = speedSound * (travelTime/2); //calculates distance as stated in slides, divides travel time by 2 because it asks for ONE way travel
  Serial.println(distance); //outputs calculated distance to serial monitor
  if(distance < 10){ //if distance is below 10cm
    digitalWrite(green, LOW); //turn red led on and everything else off
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }
  if(distance >= 10 && distance < 30){ //if distance is between 10 and 30 cm
    digitalWrite(green, LOW); //turn yellow led on and everything else off
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }
  if(distance >= 30){ //if distance is above 30 cm
    digitalWrite(green, HIGH); //turn green led on and everything else off
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  delay(10); //add short delay so ultrasonic sensor has time to send and receive pulses
}
