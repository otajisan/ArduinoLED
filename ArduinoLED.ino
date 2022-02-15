/**
 * Arduino LED ON/OFF
 * 
 * - setup:
 *  - LED Plus: 13 PIN
 *  - LED Minux: GND
 */
static int PIN = 13;
static int DURATION = 200;

void setup() {
  pinMode(PIN, OUTPUT);
}

void loop() {
  on();
  off();
}

void on() {
  digitalWrite(PIN, HIGH);
  wait();
}

void off() {
  digitalWrite(PIN, LOW);
  wait();
}

void wait() {
  delay(DURATION);
}
