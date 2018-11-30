#include <Particle.h>
#if !defined(PARTICLE)
  #include <Wire.h>
#endif

SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(MANUAL);

void setup() {
    pinMode(D0, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(D0, HIGH);
    delay(1000);
    digitalWrite(D0, LOW);
    Serial.print("?\n");
    delay(1000);
}
