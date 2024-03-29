// Library: Soil Moisture FC-28
// By: Devan Cakra M.W

#ifndef ESP_FC28_H
#define ESP_FC28_H

#include "Arduino.h"

class FC28Sensor{
  public:
    FC28Sensor(uint8_t pin);
    void begin();
    void limit(uint8_t min_wet, uint8_t max_dry);
    void viewData();
    float getSoilMoisture();

  private:
    uint8_t _pin, wetSoil, drySoil;
    float analogFC28, value;
};

#endif
