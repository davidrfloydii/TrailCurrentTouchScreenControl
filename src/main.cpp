#include <Arduino.h>
#include "gui/gui.h"
#include "ui/ui.h"
#include "ui/actions.h"
#include "ui/vars.h"
#include <lv_conf.h>
#include <lvgl.h>
#include "canHelper.h"
#include "ui/screens.h"
#define CURRENT_VERSION "0.0.2"
// Intervals are critical for balancing status changes with the desired framerate.
// This directly coorelates to how "responsive" the touch screen interface is.
// Set interval for lvgl updates
unsigned long lvStartMillis;
unsigned long lvCurrentMillis;
const unsigned long lvPeriod = 5;
// Set interfal for how frequently device status updates should occur
unsigned long deviceStatusStartMillis;
unsigned long deviceStatusCurrentMillis;
const unsigned long deviceStatusPeriod = 33;
// Set interval for polling the CAN Bus for messages
unsigned long canStartMillis;
unsigned long canCurrentMillis;
const unsigned long canStatusPeriod = 100;
// Set interval for registering touch events
unsigned long touchCurrentMillis;
const unsigned long touchStatusPeriod = 60000;
// Set basic variables to default states and initialize the UI.
void setup() {
  Serial.begin(115200);
  canHelper::setupCan();
  gui_start();  
  // Set default values for variables that are dipslayed in the UI.
  set_var_current_version(CURRENT_VERSION);
  set_var_power_charge_type("Unavailable");
  set_var_battery_voltage(0);
  set_var_battery_soc_percentage(0);
  set_var_power_time_to_go_measurement(0);
  set_var_power_time_to_go_measurement_type("hrs");
  set_var_fresh_water_level_percentage(50);
  set_var_grey_water_level_percentage(50);
  set_var_shore_power_connection_status("Disconnected");
  set_var_screen_brightness_level(255);
  set_var_screen_timeout_value(1);
  touchStartMillis = millis();
}
// In the loop we check for touch events, update lvgl, get CAN Bus messages, and update the UI.
void loop() {
  lvCurrentMillis = millis();
  deviceStatusCurrentMillis = millis();
  canCurrentMillis = millis();
  touchCurrentMillis = millis();

  if (touchCurrentMillis - touchStartMillis  >= (get_var_screen_timeout_value()*60*1000)) {
    adjust_display_brightness(0);
  } else {
    adjust_display_brightness(get_var_screen_brightness_level());
  }

  if (lvCurrentMillis - lvStartMillis >= lvPeriod)
  {
    lv_timer_handler();
    ui_tick();
    lvStartMillis = lvCurrentMillis;
  }

  if (canCurrentMillis - canStartMillis >= canStatusPeriod)
  {
    canHelper::canLoop();
    canStartMillis = canCurrentMillis;
  }

  if (deviceStatusCurrentMillis - deviceStatusStartMillis >= deviceStatusPeriod)
  {
    set_var_are_any_devices_on(get_var_are_any_devices_on());
    deviceStatusStartMillis = deviceStatusCurrentMillis;
  }
}
