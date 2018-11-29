
int greenLED = 3;
int redLED = 4;
void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED,OUTPUT);

}

void loop() {
 digitalWrite(greenLED, HIGH);
 digitalWrite(redLED, HIGH);
 delay(1000);
 digitalWrite(greenLED, LOW);
 digitalWrite(redLED, LOW);
 delay(1000);
}
