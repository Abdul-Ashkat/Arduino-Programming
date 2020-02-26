
int ledPin = 9;
int brightNess = 255;
int dela1 = 2;
int dela2 = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i <= brightNess; i++) {
    analogWrite(ledPin, i);
    delay(dela1);
  }
  delay(dela2);
  for (int i = brightNess; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(dela1);
  }
  delay(dela2);
}
