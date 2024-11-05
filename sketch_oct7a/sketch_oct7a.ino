int blue1 = 9;
int blue2 = 10;
int blue3 = 11;
double val = 255;
void setup() {
  // put your setup code here, to run once:
  pinMode(blue1, OUTPUT);
  pinMode(blue2, OUTPUT);
  pinMode(blue3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(blue1, HIGH); //turn first LED on for one second
  analogWrite(blue1, 255);
  delay(1000);
  analogWrite(blue1, 0);
  //digitalWrite(blue1, LOW);

  double test2 = val * 0.6;
  //analogWrite(blue2, test2); //when first led turns off, turn second one on at 60% brightness for one second
  analogWrite(blue2, 153);
  delay(1000);
  analogWrite(blue2, 0);

  double test3 = val * 0.3;
  //analogWrite(blue3, test3); //when second led turns off, turn third one on at 30% brightness for one second
  analogWrite(blue3, 77);
  delay(1000);
  analogWrite(blue3, 0); //turn the third led off
  

}
