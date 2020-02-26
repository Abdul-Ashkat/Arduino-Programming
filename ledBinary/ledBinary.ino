//Variables
int ledPin1 = 9;
int ledPin2 = 10;
int ledPin3 = 11;
int ledPin4 = 12;
int ledPin5 = 13;
int del1 = 0;
int del2 = 1000;
int del3 = 3000;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//0=00000
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//1=00001  
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//2=00010
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//3=00011
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//4=00100
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//5=00101
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//6=00110
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//7=00111
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//8=01000
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//9=01001
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//10=01010
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//11=01011
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//12=01100
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//13=01101
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//14=01110
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//15=01111
  digitalWrite(ledPin1, LOW);
  delay(del1);
  digitalWrite(ledPin2, HIGH);
  delay(del1);
  digitalWrite(ledPin3, HIGH);
  delay(del1);
  digitalWrite(ledPin4, HIGH);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);

//16=10000
  digitalWrite(ledPin1, HIGH);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, LOW);
  delay(del2);
//
//17=10001
  digitalWrite(ledPin1, HIGH);
  delay(del1);
  digitalWrite(ledPin2, LOW);
  delay(del1);
  digitalWrite(ledPin3, LOW);
  delay(del1);
  digitalWrite(ledPin4, LOW);
  delay(del1);
  digitalWrite(ledPin5, HIGH);
  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
//
////0=0000
//  digitalWrite(ledPin1, LOW);
//  delay(del1);
//  digitalWrite(ledPin2, LOW);
//  delay(del1);
//  digitalWrite(ledPin3, LOW);
//  delay(del1);
//  digitalWrite(ledPin4, LOW);
//  delay(del2);
}
