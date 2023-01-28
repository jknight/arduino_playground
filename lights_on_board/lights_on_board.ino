/*
-----------------------------------
Try to make light on board do stuff
-----------------------------------
*/

void setup() { 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  for(int i = 3; i <= 5; i++) {
    digitalWrite(i, HIGH);
     delay(200);
    digitalWrite(i, LOW);
    delay(200);
  }

}