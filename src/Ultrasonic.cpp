#include "Ultrasonic.h"
#include "Arduino.h"

Ultrasonic::Ultrasonic(byte isiPinTrigger, byte isiPinEcho) {
  pinTrigger = isiPinTrigger;
  pinEcho = isiPinEcho;
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
}

long Ultrasonic::bacaUltrasonic() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(8);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(8);
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(8);
  long durasi = pulseIn(pinEcho, HIGH);
  long jarak = (durasi / 2) / 29.1;
  return jarak;
}
