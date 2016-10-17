#include <Keyboard.h>
 int led = 13;
 int b0 = 2;
 int dtime = 1000;
void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led,HIGH);
  Serial.begin(9600);
  Keyboard.begin();
  pinMode(b0, INPUT_PULLUP);
  Serial.println("setup complete");
  digitalWrite(led,LOW);
}
void loop() {
  int b0stat = digitalRead(b0);
  if(b0stat == LOW){
    
  }
  else{
  }
}

