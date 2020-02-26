//Variables
int ledPin = 11;
int del1 = 400;
int del2 = 1000;
int del3 = 3000;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del1);
  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del1);
  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del1);

  digitalWrite(ledPin, HIGH);
  delay(del2);
  digitalWrite(ledPin, LOW);
  delay(del2);
  digitalWrite(ledPin, HIGH);
  delay(del2);
  digitalWrite(ledPin, LOW);
  delay(del2);
  digitalWrite(ledPin, HIGH);
  delay(del2);
  digitalWrite(ledPin, LOW);
  delay(del2);

  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del1);
  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del1);
  digitalWrite(ledPin, HIGH);
  delay(del1);
  digitalWrite(ledPin, LOW);
  delay(del3);
}
