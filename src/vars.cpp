#include <string.h>
#include "ui/ui.h"
#include "ui/vars.h"
#include "ui/screens.h"
#include "ui/styles.h"

int32_t pdm01_device01_status;
int32_t get_var_pdm01_device01_status()
{
    return pdm01_device01_status;
}
void set_var_pdm01_device01_status(int32_t value)
{
    pdm01_device01_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device01_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device01, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device01_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device01, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device01_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device01_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device02_status;
int32_t get_var_pdm01_device02_status()
{
    return pdm01_device02_status;
}
void set_var_pdm01_device02_status(int32_t value)
{
    pdm01_device02_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device02_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device02, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device02_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device02, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device02_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device02_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device03_status;
int32_t get_var_pdm01_device03_status()
{
    return pdm01_device03_status;
}
void set_var_pdm01_device03_status(int32_t value)
{
    pdm01_device03_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device03_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device03, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device03_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device03, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device03_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device03_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device04_status;
int32_t get_var_pdm01_device04_status()
{
    return pdm01_device04_status;
}
void set_var_pdm01_device04_status(int32_t value)
{
    pdm01_device04_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device04_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device04, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device04_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device04, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device04_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device04_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device05_status;
int32_t get_var_pdm01_device05_status()
{
    return pdm01_device05_status;
}
void set_var_pdm01_device05_status(int32_t value)
{
    pdm01_device05_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device05_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device05, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device05_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device05, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device05_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device05_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device06_status;
int32_t get_var_pdm01_device06_status()
{
    return pdm01_device06_status;
}
void set_var_pdm01_device06_status(int32_t value)
{
    pdm01_device06_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device06_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device06, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device06_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device06, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device06_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device06_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device07_status;
int32_t get_var_pdm01_device07_status()
{
    return pdm01_device07_status;
}
void set_var_pdm01_device07_status(int32_t value)
{
    pdm01_device07_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device07_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device07, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device07_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device07, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device07_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device07_label, LV_STATE_CHECKED);
    }
}

int32_t pdm01_device08_status;
int32_t get_var_pdm01_device08_status()
{
    return pdm01_device08_status;
}
void set_var_pdm01_device08_status(int32_t value)
{
    pdm01_device08_status = value;
    if (value > 0)
    {
        lv_obj_add_state(objects.lbl_device08_status_ind, LV_STATE_CHECKED);
        lv_obj_add_state(objects.btn_device08, LV_STATE_CHECKED);
        lv_obj_add_state(objects.lbl_device08_label, LV_STATE_CHECKED);
    }
    else
    {
        lv_obj_clear_state(objects.btn_device08, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device08_status_ind, LV_STATE_CHECKED);
        lv_obj_clear_state(objects.lbl_device08_label, LV_STATE_CHECKED);
    }
}

// Temperature reading currently from interior sensor
int32_t current_interior_temperature;
int32_t get_var_current_interior_temperature()
{
    return current_interior_temperature;
}
void set_var_current_interior_temperature(int32_t value)
{
    current_interior_temperature = value;
}

bool are_any_devices_on;
bool get_var_are_any_devices_on()
{
    return ((get_var_pdm01_device01_status() > 0) || (get_var_pdm01_device02_status() > 0) || (get_var_pdm01_device03_status() > 0) ||
            (get_var_pdm01_device04_status() > 0) || (get_var_pdm01_device05_status() > 0) || (get_var_pdm01_device06_status() > 0) || (get_var_pdm01_device07_status() > 0) ||
            (get_var_pdm01_device08_status() > 0));
}

void set_var_are_any_devices_on(bool value)
{
    are_any_devices_on = value;
    if (value)
    {
        lv_label_set_text(objects.lbl_button_all_label, "All Off");
    }
    else
    {
        lv_label_set_text(objects.lbl_button_all_label, "All On");
    }
}

int32_t active_brightness_change_device_id;

int32_t get_var_active_brightness_change_device_id()
{
    return active_brightness_change_device_id;
}

void set_var_active_brightness_change_device_id(int32_t value)
{
    active_brightness_change_device_id = value;
}

float battery_voltage;
float get_var_battery_voltage()
{
    return battery_voltage;
}
void set_var_battery_voltage(float value)
{
    battery_voltage = value;
}

int32_t shunt_current_consumption;
int32_t get_var_shunt_current_consumption()
{
    return shunt_current_consumption;
}
void set_var_shunt_current_consumption(int32_t value)
{
    shunt_current_consumption = value;
}

int32_t battery_soc_percentage;
int32_t get_var_battery_soc_percentage()
{
    return battery_soc_percentage;
}
void set_var_battery_soc_percentage(int32_t value)
{
    battery_soc_percentage = value;
}

int32_t current_power_consumption_in_watts;
int32_t get_var_current_power_consumption_in_watts()
{
    return current_power_consumption_in_watts;
}
void set_var_current_power_consumption_in_watts(int32_t value)
{
    current_power_consumption_in_watts = value;
}

float power_time_to_go_measurement;
float get_var_power_time_to_go_measurement()
{
    return power_time_to_go_measurement;
}
void set_var_power_time_to_go_measurement(float value)
{
    if (value < 0)
    {
        lv_obj_add_flag(objects.label_power_remaining_time_to_go_value, LV_OBJ_FLAG_HIDDEN);
    }
    else
    {
        lv_obj_clear_flag(objects.label_power_remaining_time_to_go_value, LV_OBJ_FLAG_HIDDEN);
    }
    power_time_to_go_measurement = value;
}

char power_time_to_go_measurement_type[100] = {0};
const char *get_var_power_time_to_go_measurement_type()
{
    return power_time_to_go_measurement_type;
}
void set_var_power_time_to_go_measurement_type(const char *value)
{
    strncpy(power_time_to_go_measurement_type, value, sizeof(power_time_to_go_measurement_type) / sizeof(char));
    power_time_to_go_measurement_type[sizeof(power_time_to_go_measurement_type) / sizeof(char) - 1] = 0;
}

char shore_power_connection_status[100] = {0};
const char *get_var_shore_power_connection_status()
{
    return shore_power_connection_status;
}
void set_var_shore_power_connection_status(const char *value)
{
    strncpy(shore_power_connection_status, value, sizeof(shore_power_connection_status) / sizeof(char));
    shore_power_connection_status[sizeof(shore_power_connection_status) / sizeof(char) - 1] = 0;
}

char current_version[100] = {0};
const char *get_var_current_version()
{
    return current_version;
}
void set_var_current_version(const char *value)
{
    strncpy(current_version, value, sizeof(current_version) / sizeof(char));
    current_version[sizeof(current_version) / sizeof(char) - 1] = 0;
}

char power_charge_type[100] = {0};
const char *get_var_power_charge_type()
{
    return power_charge_type;
}
void set_var_power_charge_type(const char *value)
{
    strncpy(power_charge_type, value, sizeof(power_charge_type) / sizeof(char));
    power_charge_type[sizeof(power_charge_type) / sizeof(char) - 1] = 0;
}

int32_t fresh_water_level_percentage;
int32_t get_var_fresh_water_level_percentage()
{
    return fresh_water_level_percentage;
}
void set_var_fresh_water_level_percentage(int32_t value)
{
    fresh_water_level_percentage = value;
}

int32_t grey_water_level_percentage;
int32_t get_var_grey_water_level_percentage()
{
    return grey_water_level_percentage;
}
void set_var_grey_water_level_percentage(int32_t value)
{
    grey_water_level_percentage = value;
}

int32_t current_power_incoming;
int32_t get_var_current_power_incoming()
{
    return current_power_incoming;
}
void set_var_current_power_incoming(int32_t value)
{
    current_power_incoming = value;
}

int32_t screen_brightness_level;
int32_t get_var_screen_brightness_level()
{
    return screen_brightness_level;
}

void set_var_screen_brightness_level(int32_t value)
{
    screen_brightness_level = value;
}

int32_t screen_timeout_value;
int32_t get_var_screen_timeout_value()
{
    return screen_timeout_value;
}
void set_var_screen_timeout_value(int32_t value)
{
    if (value < 1)
    {
        screen_timeout_value = 1;
    }
    else if (value > 60) {
        screen_timeout_value = 60;
    }
    else
    {
        screen_timeout_value = value;
    }
}

int32_t solar_wattage;
int32_t get_var_solar_wattage() {
    return solar_wattage;
}
void set_var_solar_wattage(int32_t value) {
    solar_wattage = value;
}

char solar_status[100] = { 0 };
const char *get_var_solar_status() {
    return solar_status;
}
void set_var_solar_status(const char *value) {
    strncpy(solar_status, value, sizeof(solar_status) / sizeof(char));
    solar_status[sizeof(solar_status) / sizeof(char) - 1] = 0;
}

float humidity_value;
float get_var_humidity_value() {
    return humidity_value;
}
void set_var_humidity_value(float value) {
    humidity_value = value;
}