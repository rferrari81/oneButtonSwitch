#include <oneButtonSwitch.h>

#define pinButton 10     //ON pin onebuttonSwitch board
#define pinHoldMOSFET 7  //OFF pin onebuttonSwitch board

oneButtonSwitch OBS(pinButton, pinHoldMOSFET);

void setup() {
}

void loop() {
  OBS.oneButtonSwitchLOOP();
}
