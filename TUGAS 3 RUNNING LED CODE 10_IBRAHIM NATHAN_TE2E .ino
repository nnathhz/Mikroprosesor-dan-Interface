const int buttonPin1 = 5;  
const int buttonPin2 = 6;  
const int buttonPin3 = 7;  
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int lastButtonState1 = LOW;
int lastButtonState2 = LOW;
int lastButtonState3 = LOW;

void setup() {
  for (int LED = 2; LED <= 4; LED++) {
    pinMode(LED, OUTPUT);
  }

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void resetLEDs() {
  // Reset all LEDs to LOW
  for (int LED = 2; LED <= 4; LED++) {
    digitalWrite(LED, LOW);
  }
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 == HIGH && lastButtonState1 == LOW) {
    resetLEDs(); 
    for (int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }
  lastButtonState1 = buttonState1; 

  if (buttonState2 == HIGH && lastButtonState2 == LOW) {
    resetLEDs();
    for (int LED = 2; LED <= 4; LED++) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }
  lastButtonState2 = buttonState2; 

  if (buttonState3 == HIGH && lastButtonState3 == LOW) {
    resetLEDs();
    for (int LED = 2; LED <= 4; LED++) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
    for (int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }
  lastButtonState3 = buttonState3; 
}