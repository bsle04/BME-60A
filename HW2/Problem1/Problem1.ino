int i = 0; //variable for i as stated in the prompt
int white = 7; //variables for the pin numbers of each led
int green = 9;
int blue = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(white, OUTPUT); //setting colored LEDs to output mode
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT); //setting builtin led to output mode
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int counter = 0; counter <= 4; counter++){ //for loop as stated in the prompt
    if(i == 0){
      digitalWrite(green, HIGH); //turn the green LED on for 0.5 seconds then turn it off
      delay(500);
      digitalWrite(green, LOW);
      i = 1; //set i to 1
    }else if(i == 1){
      digitalWrite(blue, HIGH); //turn the blue LED on for 0.5 seconds then turn it off
      delay(500);
      digitalWrite(blue, LOW);
      i = 2; //set i to 2
    }else{
      i = 0; //set i to 0
      if(counter == 2){
        digitalWrite(white, HIGH); //turn the white LED on for 0.5 seconds then turn it off
        delay(500);
        digitalWrite(white, LOW);
      }else{
        digitalWrite(LED_BUILTIN, HIGH); //turn the built in LED on for 0.5 seconds then turn it off
        delay(500);
        digitalWrite(LED_BUILTIN, LOW);
      }
    }
  }
}
