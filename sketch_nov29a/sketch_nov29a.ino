
int greenLED = 3;
int redLED = 4;
void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED,OUTPUT);

}

void loop() {
 digitalWrite(greenLED, HIGH);
 delay(1000);
 digitalWrite(greenLED, LOW);
 delay(100);
 digitalWrite(redLED, HIGH);
 delay(1000);
 digitalWrite(redLED, LOW);
 delay(100);
 digitalWrite(greenLED, HIGH);
 delay(50);
 digitalWrite(greenLED, LOW);
 delay(50);
 digitalWrite(redLED, HIGH);
 delay(50);
 digitalWrite(redLED, LOW);
 delay(50);
  digitalWrite(greenLED, HIGH);
 delay(50);
 digitalWrite(greenLED, LOW);
 delay(50);
 digitalWrite(redLED, HIGH);
 delay(50);
 digitalWrite(redLED, LOW);
 delay(50);
  digitalWrite(greenLED, HIGH);
 delay(50);
 digitalWrite(greenLED, LOW);
 delay(50);
 digitalWrite(redLED, HIGH);
 delay(50);
 digitalWrite(redLED, LOW);
 delay(50);
}
