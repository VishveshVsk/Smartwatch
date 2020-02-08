#ifndef SmartwatchPower_h
#define SmartwatchPower_h

#include <Arduino.h> // Standard Arduino libraries

class SmartwatchPower
{
  private:

  public:
    bool isCharging();
    uint16_t getBatteryVoltage();
};

#endif
