/*
---------------------
First Arduino project
---------------------
Make lights blink from 1 to 10 times, then restart.
*/

int blink_times = 1;
int blink_max = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void blink(int times) {
  for(int i = 0; i < times; i++) {
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
    delay(300);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if(blink_times == 10) blink_times = 1;
  blink(blink_times);
  delay(2500);
  ++blink_times;
}

