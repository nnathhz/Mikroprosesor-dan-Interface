#include <Servo.h>

const int potPin = A0;  
const int servoPin = 9;  
Servo servo;  

void setup() {
  servo.attach(servoPin);  
}

void loop() {
  int adcValue = analogRead(potPin);  
  int angle = map(adcValue, 0, 1023, 0, 180);  
  servo.write(angle);  // Atur sudut servo
  delay(15);  
}