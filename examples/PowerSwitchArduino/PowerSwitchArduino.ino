#include <oneButtonSwitch.h>

#define pinButton 10
#define pinHoldMOSFET 7

oneButtonSwitch OBS(pinButton, pinHoldMOSFET);

void setup() {
}

void loop() {
  OBS.oneButtonSwitchLOOP();
}
