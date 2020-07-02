#define MOTOR_PIN 25

unsigned long DELAY_START = 0; //0 ms
unsigned long WATERING_TIME = 10000; //3 seconds in ms
unsigned long WATERING_DELAY = 10800000; //3 hours in ms

void waterFor(unsigned long wateringT);

void setup() {
  pinMode(MOTOR_PIN, OUTPUT);
  digitalWrite(MOTOR_PIN, LOW); //turn of watering
  DELAY_START = millis();
  waterFor(WATERING_TIME); //start initial watering process
}

void loop() {
  if (millis() - DELAY_START >= WATERING_DELAY) {
    waterFor(WATERING_TIME);
    DELAY_START = millis();
  }
}

void waterFor(unsigned long wateringT) {//wateringT is in ms
  unsigned long start = millis();
  while (millis() - start < wateringT) {
    digitalWrite(MOTOR_PIN, HIGH);
  }
  digitalWrite(MOTOR_PIN, LOW);
}
