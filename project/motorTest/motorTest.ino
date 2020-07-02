#define MOTOR_PIN 25

void setup() {
  unsigned long DELAY_START = 0; //0 ms
  unsigned long WATERING_TIME = 3000; //3 seconds in ms
  unsigned long WATERING_DELAY = 28800000; //7 hours in ms
  pinMode(MOTOR_PIN, OUTPUT);
  digitalWrite(MOTOR_PIN, HIGH); //turn of watering
} 

void loop() {
  
}
