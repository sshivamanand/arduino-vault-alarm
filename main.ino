// --- Pin Definitions ---
const int irPin = 2;     // IR Sensor
const int pirPin = 3;    // PIR Motion Sensor
const int ldrPin = 4;    // LDR Sensor
const int buzzerPin = 5; // Buzzer

void setup() {
  pinMode(irPin, INPUT);
  pinMode(pirPin, INPUT);
  pinMode(ldrPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Multi-Sensor Security System Initialized");
}

void loop() {
  int irState = digitalRead(irPin);     // 0 = Obstacle
  int pirState = digitalRead(pirPin);   // 1 = Motion
  int ldrState = digitalRead(ldrPin);   // 0 = Laser Hit

  bool alarmTriggered = false;

  if (irState == LOW) {
    Serial.println("⚠️  IR Sensor: Obstacle Detected!");
    alarmTriggered = true;
  }

  if (pirState == HIGH) {
    Serial.println("⚠️  PIR Sensor: Motion Detected!");
    alarmTriggered = true;
  }

  if (ldrState == LOW) {
    Serial.println("⚠️  LDR Sensor: Laser Detected!");
    alarmTriggered = true;
  }

  // Activate buzzer if any sensor is triggered
  digitalWrite(buzzerPin, alarmTriggered ? HIGH : LOW);

  delay(300); // Slight delay for serial stability
}
