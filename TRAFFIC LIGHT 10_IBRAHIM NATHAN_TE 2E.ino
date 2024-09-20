// Definisi pin untuk lampu lalu lintas
const int mainRed = 2;
const int mainYellow = 3;
const int mainGreen = 4;

const int branch1Red = 5;
const int branch1Yellow = 6;
const int branch1Green = 7;

const int branch2Red = 8;
const int branch2Yellow = 9;
const int branch2Green = 10;

void setup() {
  // Set semua pin LED sebagai output
  pinMode(mainRed, OUTPUT);
  pinMode(mainYellow, OUTPUT);
  pinMode(mainGreen, OUTPUT);

  pinMode(branch1Red, OUTPUT);
  pinMode(branch1Yellow, OUTPUT);
  pinMode(branch1Green, OUTPUT);

  pinMode(branch2Red, OUTPUT);
  pinMode(branch2Yellow, OUTPUT);
  pinMode(branch2Green, OUTPUT);
}

void loop() {
  // Jalan utama hijau, cabang merah
  digitalWrite(mainGreen, HIGH);
  digitalWrite(mainYellow, LOW);
  digitalWrite(mainRed, LOW);

  digitalWrite(branch1Red, HIGH);
  digitalWrite(branch1Yellow, LOW);
  digitalWrite(branch1Green, LOW);

  digitalWrite(branch2Red, HIGH);
  digitalWrite(branch2Yellow, LOW);
  digitalWrite(branch2Green, LOW);

  delay(5000); // Lampu hijau jalan utama menyala selama 5 detik

  // Jalan utama kuning, cabang tetap merah
  digitalWrite(mainGreen, LOW);
  digitalWrite(mainYellow, HIGH);
  digitalWrite(mainRed, LOW);
  
  delay(1000); // Lampu kuning jalan utama menyala selama 2 detik

  // Jalan utama merah, cabang 1 hijau, cabang 2 tetap merah
  digitalWrite(mainGreen, LOW);
  digitalWrite(mainYellow, LOW);
  digitalWrite(mainRed, HIGH);

  digitalWrite(branch1Red, LOW);
  digitalWrite(branch1Yellow, LOW);
  digitalWrite(branch1Green, HIGH);

  digitalWrite(branch2Red, HIGH);
  digitalWrite(branch2Yellow, LOW);
  digitalWrite(branch2Green, LOW);

  delay(5000); // Lampu hijau cabang 1 menyala selama 5 detik

  // Cabang 1 kuning, cabang 2 tetap merah
  digitalWrite(branch1Green, LOW);
  digitalWrite(branch1Yellow, HIGH);
  digitalWrite(branch1Red, LOW);
  
  delay(1000); // Lampu kuning cabang 1 menyala selama 2 detik

  // Jalan utama merah, cabang 2 hijau, cabang 1 merah
  digitalWrite(mainGreen, LOW);
  digitalWrite(mainYellow, LOW);
  digitalWrite(mainRed, HIGH);

  digitalWrite(branch1Red, HIGH);
  digitalWrite(branch1Yellow, LOW);
  digitalWrite(branch1Green, LOW);

  digitalWrite(branch2Red, LOW);
  digitalWrite(branch2Yellow, LOW);
  digitalWrite(branch2Green, HIGH);

  delay(5000); // Lampu hijau cabang 2 menyala selama 5 detik

  // Cabang 2 kuning, cabang 1 merah
  digitalWrite(branch2Green, LOW);
  digitalWrite(branch2Yellow, HIGH);
  digitalWrite(branch2Red, LOW);
  
  delay(1000); // Lampu kuning cabang 2 menyala selama 2 detik

  // Kembali ke siklus jalan utama hijau
}

