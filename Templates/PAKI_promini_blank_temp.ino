#include <Keyboard.h>
 int dtime = 1000;
 int n = 0;
 int pin = 16;
void setup() {
  Serial.begin(9600);
  //Keyboard.begin();
  delay(2000);
  Serial.println("setup complete");
  pinMode(pin, INPUT);
  Serial.print("onetime");
}
void loop() {
}
