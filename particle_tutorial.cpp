#include <Particle.h>
#if !defined(PARTICLE)
  #include <Wire.h>
#endif

SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(MANUAL);
int iter = 0;
int counter = 0;
// Servo servo;


#define LINE A1
void anInterrupt() {
    counter++;
}


void setup() {
  Serial.begin(9600);
    pinMode(LINE, INPUT);
    // Serial.begin(9600);
    // analogWrite(motorOut, 0);
    attachInterrupt(LINE, anInterrupt, CHANGE);

}

void loop() {
  Serial.println(iter);
    // Serial.println(analogRead(LINE));
    Serial.println(counter);
      // analogWrite(motorOut, );
      iter++;
      delay(50);
    // servo.write(STOP)
}
