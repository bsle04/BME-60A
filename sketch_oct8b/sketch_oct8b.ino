int LEDpin = 13;
int delayPeriod = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin, HIGH);
  delay(delayPeriod);
  digitalWrite(LEDpin, LOW);
  delay(delayPeriod);
  delayPeriod = delayPeriod + 100;

  if(delayPeriod > 1000){
    delayPeriod = 100;
  }
}
