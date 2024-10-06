const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int adcValue = analogRead(potPin);
  int brightness = map(adcValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  delay(10);
}
