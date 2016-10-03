#include <Keyboard.h>
 int led = 13;
 int b0 = 12;
 int b1 = 8;
 int b2 = 4;
 int dtime = 500;
void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led,HIGH);
  Serial.begin(9600);
  Keyboard.begin();
  pinMode(b0, INPUT_PULLUP);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  Serial.println("setup complete");
  digitalWrite(led,LOW);
}
void loop() {
  int b0stat = digitalRead(b0);
  int b1stat = digitalRead(b1);
  int b2stat = digitalRead(b2);
  if(b0stat == LOW){
    delay(dtime);
  }
  else if(b1stat == LOW){
    delay(dtime);
  }
  else if(b2stat == LOW){
    delay(dtime);
  }
  else{
  }
}
