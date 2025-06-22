#pragma once
#include <Arduino.h>
#include "driver/twai.h"

#define DEBUG 1 // This sets whether or not the Serial.println and Serial.print will even be compiled
// Conditional definition for debugging if DEBUG is 1 then it will print to serial port.
// If DEBUG = 0 then the lines will be removed by the compiler.
#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#define debugf(x,y) Serial.printf(x,y)
#define debugg(x,y,z) Serial.printf(x, y, z);
#else
#define debug(x)
#define debugln(x)
#define debugf(x,y)
#define debugg(x,y,z)
#endif