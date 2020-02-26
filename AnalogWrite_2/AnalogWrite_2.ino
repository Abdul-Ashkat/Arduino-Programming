//Variables
int ledPin1 = 3;
int ledPin2 = 5;
int ledPin3 = 6;
int ledPin4 = 9;
int ledPin5 = 10;
int del1 = 0;
int del2 = 3000;
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
for(int i=20;i<=255;i++){
//0=00000
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//1=00001  
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//2=00010
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//3=00011
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//4=00100
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//5=00101
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//6=00110
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//7=00111
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//8=01000
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//9=01001
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//10=01010
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//11=01011
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//12=01100
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//13=01101
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
//14=01110
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//15=01111
  analogWrite(ledPin1, 0);
  delay(del1);
  analogWrite(ledPin2, i);
  delay(del1);
  analogWrite(ledPin3, i);
  delay(del1);
  analogWrite(ledPin4, i);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);

//16=10000
  analogWrite(ledPin1, i);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, 0);
  delay(del2);
//
//17=10001
  analogWrite(ledPin1, i);
  delay(del1);
  analogWrite(ledPin2, 0);
  delay(del1);
  analogWrite(ledPin3, 0);
  delay(del1);
  analogWrite(ledPin4, 0);
  delay(del1);
  analogWrite(ledPin5, i);
  delay(del2);
}
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
//
////0=0000
//  analogWrite(ledPin1, 0);
//  delay(del1);
//  analogWrite(ledPin2, 0);
//  delay(del1);
//  analogWrite(ledPin3, 0);
//  delay(del1);
//  analogWrite(ledPin4, 0);
//  delay(del2);
}
