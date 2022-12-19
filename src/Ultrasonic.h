#ifndef Ultrasonic_h
#define Ultrasonic_h
#include "Arduino.h"

class Ultrasonic {
  private:
    byte pinTrigger;
    byte pinEcho;
  public:
    Ultrasonic(byte isiPinTrigger, byte isiPinEcho);
    long bacaUltrasonic();
};

#endif