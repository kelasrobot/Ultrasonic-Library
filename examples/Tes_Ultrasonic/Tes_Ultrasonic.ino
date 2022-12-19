#include <Ultrasonic.h>
Ultrasonic ultrasonic1(6, 5);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long jarak = ultrasonic1.bacaUltrasonic();
  if (jarak > 0)
    Serial.println(jarak);
}
