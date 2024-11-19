#include <Servo.h>

Servo myservo;  // create servo object to control a servo
float speedSound = 0.034; //speed of sound given in the slides
int trig = 7; //pins for trig and echo for ultrasonic sensor
int echo = 8;
int buzzer = 3; //pin for buzzer

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600); //starts serial monitor 9600 baud
  pinMode(trig, OUTPUT); //setting pins to input or output
  pinMode(echo, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trig, HIGH); //sends short 10ms pulse to trig pin
  delay(10);
  digitalWrite(trig, LOW);

  float travelTime = pulseIn(echo, HIGH); //measures travel time as stated in slides
  float distance = speedSound * (travelTime/2); //calculates distance as stated in slides, divides travel time by 2 because it asks for ONE way travel
  Serial.println(distance); //outputs calculated distance to serial monitor
  if(distance < 10){ //if distance is less than 10
    myservo.write(90); //turn servo to 90 degrees
    digitalWrite(buzzer, HIGH); //play sound on buzzer
  }else{ //otherwise, i.e. distance >= 10
    myservo.write(0); //turn servo to 0 degrees
    digitalWrite(buzzer, LOW); //don't play sound on buzzer
  }
  delay(10); //add short delay so ultrasonic sensor has time to send and receive pulses
}
