const int potPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(potPin);
  Serial.print("ADC Value: ");
  Serial.println(sensorValue);
  delay(100);
}