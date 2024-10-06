const int potPin = A0;  // Potentiometer connected to analog input A0

void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 bps
}

void loop() {
  int adcValue = analogRead(potPin);  // Read the ADC value from potentiometer
  float voltage = (adcValue * 5.0) / 1023.0;  // Convert ADC value to voltage
  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.println(voltage);  // Print the ADC value and voltage to serial monitor
  delay(100);  // Wait for 100ms before taking the next reading
}
