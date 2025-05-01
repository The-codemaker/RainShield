#include <Servo.h>

int raindropPin = 12;
int servoPin1 = 11;
int servoPin2 = 10;

Servo myservo1;
Servo myservo2;

void setup() {
  pinMode(raindropPin, INPUT);
  myservo1.attach(servoPin1);
  myservo2.attach(servoPin2);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(raindropPin) == HIGH) { 
    myservo1.write(90);
    myservo2.write(270);
  }
  if (digitalRead(raindropPin) == LOW) { 
    myservo1.write(0);
    myservo2.write(0);
  }
}