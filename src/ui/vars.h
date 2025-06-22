#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_CURRENT_PAGE_TITLE = 0,
    FLOW_GLOBAL_VARIABLE_TEMPERATURE_MEASUREMENT_TYPE = 1,
    FLOW_GLOBAL_VARIABLE_THERMOSTAT_TEMP = 2
};

// Native global variables

extern int32_t get_var_pdm01_device01_status();
extern void set_var_pdm01_device01_status(int32_t value);
extern int32_t get_var_pdm01_device02_status();
extern void set_var_pdm01_device02_status(int32_t value);
extern int32_t get_var_pdm01_device03_status();
extern void set_var_pdm01_device03_status(int32_t value);
extern int32_t get_var_pdm01_device04_status();
extern void set_var_pdm01_device04_status(int32_t value);
extern int32_t get_var_pdm01_device05_status();
extern void set_var_pdm01_device05_status(int32_t value);
extern int32_t get_var_pdm01_device06_status();
extern void set_var_pdm01_device06_status(int32_t value);
extern int32_t get_var_pdm01_device07_status();
extern void set_var_pdm01_device07_status(int32_t value);
extern int32_t get_var_pdm01_device08_status();
extern void set_var_pdm01_device08_status(int32_t value);
extern int32_t get_var_current_interior_temperature();
extern void set_var_current_interior_temperature(int32_t value);
extern bool get_var_are_any_devices_on();
extern void set_var_are_any_devices_on(bool value);
extern int32_t get_var_active_brightness_change_device_id();
extern void set_var_active_brightness_change_device_id(int32_t value);
extern int32_t get_var_current_power_consumption_in_watts();
extern void set_var_current_power_consumption_in_watts(int32_t value);
extern float get_var_power_time_to_go_measurement();
extern void set_var_power_time_to_go_measurement(float value);
extern const char *get_var_power_time_to_go_measurement_type();
extern void set_var_power_time_to_go_measurement_type(const char *value);
extern int32_t get_var_battery_soc_percentage();
extern void set_var_battery_soc_percentage(int32_t value);
extern float get_var_battery_voltage();
extern void set_var_battery_voltage(float value);
extern int32_t get_var_shunt_current_consumption();
extern void set_var_shunt_current_consumption(int32_t value);
extern const char *get_var_shore_power_connection_status();
extern void set_var_shore_power_connection_status(const char *value);
extern const char *get_var_current_version();
extern void set_var_current_version(const char *value);
extern const char *get_var_power_charge_type();
extern void set_var_power_charge_type(const char *value);
extern int32_t get_var_fresh_water_level_percentage();
extern void set_var_fresh_water_level_percentage(int32_t value);
extern int32_t get_var_grey_water_level_percentage();
extern void set_var_grey_water_level_percentage(int32_t value);
extern int32_t get_var_current_power_incoming();
extern void set_var_current_power_incoming(int32_t value);
extern int32_t get_var_screen_brightness_level();
extern void set_var_screen_brightness_level(int32_t value);
extern int32_t get_var_screen_timeout_value();
extern void set_var_screen_timeout_value(int32_t value);
extern int32_t get_var_solar_wattage();
extern void set_var_solar_wattage(int32_t value);
extern const char *get_var_solar_status();
extern void set_var_solar_status(const char *value);
extern float get_var_humidity_value();
extern void set_var_humidity_value(float value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/