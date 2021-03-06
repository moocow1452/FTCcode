#pragma config(Sensor, S1,     HTSPB,                sensorI2CCustom9V)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*   HiTechnic Experimenter's Kit for the SuperPro

Experiment - 4 Light Level sensor

This program reads the analog value from a photo cell and displays the light level.

*/

#include "drivers/HTSPB-driver.h"

task main() {
  int inputdata;

  while(true) {
    // Read a 10bit wide analogue value from A0
    inputdata = HTSPBreadADC(HTSPB, 0, 10);

    eraseDisplay();
    nxtDisplayTextLine(1, "Light: %d", inputdata);

    wait1Msec(50);
  }
}
