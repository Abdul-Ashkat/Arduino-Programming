//Variables
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;
//int ledPin4 = 12;
//int ledPin5 = 13;
int del1 = 10;
int del2 = 1000;
int brightNess=255;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
//  pinMode(ledPin4, OUTPUT);
//  pinMode(ledPin5, OUTPUT);
}

void loop() {
 
      //0=00000
      analogWrite(ledPin1, 0);
      delay(del1);
      analogWrite(ledPin2, 0);
      delay(del1);
       for (int i = 0; i <= brightNess; i++) {
      analogWrite(ledPin3, 0);
      delay(del1);}

      //1=00001
      analogWrite(ledPin1, 0);
      delay(del1);
      analogWrite(ledPin2, 0);
      delay(del1);
       for (int i = 0; i <= brightNess; i++) {
      analogWrite(ledPin3, i);
      delay(del1);}

      //2=00010
      analogWrite(ledPin1, 0);
      delay(del1);
       for (int i = 0; i <= brightNess; i++) {
      analogWrite(ledPin2, i);
      delay(del1);}
      analogWrite(ledPin3, 0);
      delay(del1);

      //3=00011
      analogWrite(ledPin1, 0);
      delay(del1);
       for (int i = 0; i <= brightNess; i++) {
      analogWrite(ledPin2, i);
      delay(del1);
      analogWrite(ledPin3, i);
      delay(del1);
    }

}
