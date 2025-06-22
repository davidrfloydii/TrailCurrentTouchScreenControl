#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *trailer;
    lv_obj_t *power;
    lv_obj_t *water;
    lv_obj_t *air;
    lv_obj_t *settings;
    lv_obj_t *main_top_toolbar;
    lv_obj_t *main_top_toolbar__panel_top_nav_bar;
    lv_obj_t *main_top_toolbar__label_active_page_title;
    lv_obj_t *main_top_toolbar__label_interior_temperature_value;
    lv_obj_t *main_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *main_bottom_toolbar;
    lv_obj_t *main_bottom_toolbar__button_main;
    lv_obj_t *main_bottom_toolbar__button_trailer;
    lv_obj_t *main_bottom_toolbar__button_power;
    lv_obj_t *main_bottom_toolbar__button_water;
    lv_obj_t *main_bottom_toolbar__button_air;
    lv_obj_t *main_bottom_toolbar__button_settings;
    lv_obj_t *main_bottom_toolbar__panel_bottom_nav_bar;
    lv_obj_t *main_bottom_toolbar__label_button_main;
    lv_obj_t *main_bottom_toolbar__label_button_trailer;
    lv_obj_t *main_bottom_toolbar__label_button_power;
    lv_obj_t *main_bottom_toolbar__label_button_water;
    lv_obj_t *main_bottom_toolbar__label_button_air;
    lv_obj_t *main_bottom_toolbar__label_button_settings;
    lv_obj_t *trailer_top_toolbar;
    lv_obj_t *trailer_top_toolbar__panel_top_nav_bar;
    lv_obj_t *trailer_top_toolbar__label_active_page_title;
    lv_obj_t *trailer_top_toolbar__label_interior_temperature_value;
    lv_obj_t *trailer_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *trailer_bottom_nav_bar;
    lv_obj_t *trailer_bottom_nav_bar__button_main;
    lv_obj_t *trailer_bottom_nav_bar__button_trailer;
    lv_obj_t *trailer_bottom_nav_bar__button_power;
    lv_obj_t *trailer_bottom_nav_bar__button_water;
    lv_obj_t *trailer_bottom_nav_bar__button_air;
    lv_obj_t *trailer_bottom_nav_bar__button_settings;
    lv_obj_t *trailer_bottom_nav_bar__panel_bottom_nav_bar;
    lv_obj_t *trailer_bottom_nav_bar__label_button_main;
    lv_obj_t *trailer_bottom_nav_bar__label_button_trailer;
    lv_obj_t *trailer_bottom_nav_bar__label_button_power;
    lv_obj_t *trailer_bottom_nav_bar__label_button_water;
    lv_obj_t *trailer_bottom_nav_bar__label_button_air;
    lv_obj_t *trailer_bottom_nav_bar__label_button_settings;
    lv_obj_t *power_top_toolbar;
    lv_obj_t *power_top_toolbar__panel_top_nav_bar;
    lv_obj_t *power_top_toolbar__label_active_page_title;
    lv_obj_t *power_top_toolbar__label_interior_temperature_value;
    lv_obj_t *power_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *power_bottom_toolbar;
    lv_obj_t *power_bottom_toolbar__button_main;
    lv_obj_t *power_bottom_toolbar__button_trailer;
    lv_obj_t *power_bottom_toolbar__button_power;
    lv_obj_t *power_bottom_toolbar__button_water;
    lv_obj_t *power_bottom_toolbar__button_air;
    lv_obj_t *power_bottom_toolbar__button_settings;
    lv_obj_t *power_bottom_toolbar__panel_bottom_nav_bar;
    lv_obj_t *power_bottom_toolbar__label_button_main;
    lv_obj_t *power_bottom_toolbar__label_button_trailer;
    lv_obj_t *power_bottom_toolbar__label_button_power;
    lv_obj_t *power_bottom_toolbar__label_button_water;
    lv_obj_t *power_bottom_toolbar__label_button_air;
    lv_obj_t *power_bottom_toolbar__label_button_settings;
    lv_obj_t *water_top_toolbar;
    lv_obj_t *water_top_toolbar__panel_top_nav_bar;
    lv_obj_t *water_top_toolbar__label_active_page_title;
    lv_obj_t *water_top_toolbar__label_interior_temperature_value;
    lv_obj_t *water_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *water_bottom_toolbar;
    lv_obj_t *water_bottom_toolbar__button_main;
    lv_obj_t *water_bottom_toolbar__button_trailer;
    lv_obj_t *water_bottom_toolbar__button_power;
    lv_obj_t *water_bottom_toolbar__button_water;
    lv_obj_t *water_bottom_toolbar__button_air;
    lv_obj_t *water_bottom_toolbar__button_settings;
    lv_obj_t *water_bottom_toolbar__panel_bottom_nav_bar;
    lv_obj_t *water_bottom_toolbar__label_button_main;
    lv_obj_t *water_bottom_toolbar__label_button_trailer;
    lv_obj_t *water_bottom_toolbar__label_button_power;
    lv_obj_t *water_bottom_toolbar__label_button_water;
    lv_obj_t *water_bottom_toolbar__label_button_air;
    lv_obj_t *water_bottom_toolbar__label_button_settings;
    lv_obj_t *air_top_toolbar;
    lv_obj_t *air_top_toolbar__panel_top_nav_bar;
    lv_obj_t *air_top_toolbar__label_active_page_title;
    lv_obj_t *air_top_toolbar__label_interior_temperature_value;
    lv_obj_t *air_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *air_bottom_toolbar;
    lv_obj_t *air_bottom_toolbar__button_main;
    lv_obj_t *air_bottom_toolbar__button_trailer;
    lv_obj_t *air_bottom_toolbar__button_power;
    lv_obj_t *air_bottom_toolbar__button_water;
    lv_obj_t *air_bottom_toolbar__button_air;
    lv_obj_t *air_bottom_toolbar__button_settings;
    lv_obj_t *air_bottom_toolbar__panel_bottom_nav_bar;
    lv_obj_t *air_bottom_toolbar__label_button_main;
    lv_obj_t *air_bottom_toolbar__label_button_trailer;
    lv_obj_t *air_bottom_toolbar__label_button_power;
    lv_obj_t *air_bottom_toolbar__label_button_water;
    lv_obj_t *air_bottom_toolbar__label_button_air;
    lv_obj_t *air_bottom_toolbar__label_button_settings;
    lv_obj_t *settings_top_toolbar;
    lv_obj_t *settings_top_toolbar__panel_top_nav_bar;
    lv_obj_t *settings_top_toolbar__label_active_page_title;
    lv_obj_t *settings_top_toolbar__label_interior_temperature_value;
    lv_obj_t *settings_top_toolbar__label_interior_temperature_measurement_type;
    lv_obj_t *settings_bottom_toolbar;
    lv_obj_t *settings_bottom_toolbar__button_main;
    lv_obj_t *settings_bottom_toolbar__button_trailer;
    lv_obj_t *settings_bottom_toolbar__button_power;
    lv_obj_t *settings_bottom_toolbar__button_water;
    lv_obj_t *settings_bottom_toolbar__button_air;
    lv_obj_t *settings_bottom_toolbar__button_settings;
    lv_obj_t *settings_bottom_toolbar__panel_bottom_nav_bar;
    lv_obj_t *settings_bottom_toolbar__label_button_main;
    lv_obj_t *settings_bottom_toolbar__label_button_trailer;
    lv_obj_t *settings_bottom_toolbar__label_button_power;
    lv_obj_t *settings_bottom_toolbar__label_button_water;
    lv_obj_t *settings_bottom_toolbar__label_button_air;
    lv_obj_t *settings_bottom_toolbar__label_button_settings;
    lv_obj_t *btn_device01;
    lv_obj_t *btn_device02;
    lv_obj_t *btn_device03;
    lv_obj_t *btn_device04;
    lv_obj_t *btn_device05;
    lv_obj_t *btn_device06;
    lv_obj_t *btn_device07;
    lv_obj_t *btn_device08;
    lv_obj_t *obj0;
    lv_obj_t *button_brightness_dialog_close;
    lv_obj_t *slider_device_brightness_change;
    lv_obj_t *bar_battery_soc;
    lv_obj_t *power_arc_remaining_hours;
    lv_obj_t *bar_fresh_water_level;
    lv_obj_t *bar_grey_water_level;
    lv_obj_t *arc_relative_humidity;
    lv_obj_t *bar_battery_soc_1;
    lv_obj_t *button_settings_list_menu_display;
    lv_obj_t *button_settings_list_menu_about;
    lv_obj_t *button_settings_list_menu_demo;
    lv_obj_t *slider_display_brightness;
    lv_obj_t *btn_theme_light;
    lv_obj_t *btn_theme_dark;
    lv_obj_t *button_screen_timeout_decrease;
    lv_obj_t *button_screen_timeout_increase;
    lv_obj_t *button_settings_demo_light_sequence_start;
    lv_obj_t *button_settings_demo_light_sequence_stop;
    lv_obj_t *panel_thermostat;
    lv_obj_t *thermostat_arc_group;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *label_thermostat_tempurature_setting;
    lv_obj_t *panel_control_buttons;
    lv_obj_t *lbl_device01_status_ind;
    lv_obj_t *lbl_device01_label;
    lv_obj_t *lbl_device02_status_ind;
    lv_obj_t *lbl_device02_label;
    lv_obj_t *lbl_device03_status_ind;
    lv_obj_t *lbl_device03_label;
    lv_obj_t *lbl_device04_status_ind;
    lv_obj_t *lbl_device04_label;
    lv_obj_t *lbl_device05_status_ind;
    lv_obj_t *lbl_device05_label;
    lv_obj_t *lbl_device06_status_ind;
    lv_obj_t *lbl_device06_label;
    lv_obj_t *lbl_device07_status_ind;
    lv_obj_t *lbl_device07_label;
    lv_obj_t *lbl_device08_status_ind;
    lv_obj_t *lbl_device08_label;
    lv_obj_t *lbl_button_all_label;
    lv_obj_t *panel_brightness_adjustment;
    lv_obj_t *obj3;
    lv_obj_t *panel_solar_input;
    lv_obj_t *label_remaining_cacpity_2;
    lv_obj_t *panel_charge_type;
    lv_obj_t *label_solar_status;
    lv_obj_t *panel_shore_power;
    lv_obj_t *label_power_shore_power_heading;
    lv_obj_t *label_shore_power_connection_status;
    lv_obj_t *panel_shore_power_indicator_background;
    lv_obj_t *panel_shore_power_indicator_foreground;
    lv_obj_t *panel_power_battery_stats;
    lv_obj_t *label_power_remaining_cacpity_1;
    lv_obj_t *label_power_battery_percentage;
    lv_obj_t *label_battery_voltage;
    lv_obj_t *panel_power_remaining_time;
    lv_obj_t *label_power_remaining_cacpity;
    lv_obj_t *power_remaining_arc_group;
    lv_obj_t *panel_power_remaining_center;
    lv_obj_t *label_time_to_go_measurement_type;
    lv_obj_t *label_power_remaining_time_to_go_value;
    lv_obj_t *label_power_remaining;
    lv_obj_t *label_remaining_cacpity_1;
    lv_obj_t *obj4;
    lv_obj_t *label_pgrey_water_percentage;
    lv_obj_t *label_fresh_water_percentage;
    lv_obj_t *panel_relative_humity;
    lv_obj_t *label_relative_humidity_header;
    lv_obj_t *relative_humidity_arc_group;
    lv_obj_t *panel_relative_humidity_center;
    lv_obj_t *label_relative_humidity_measurement_label;
    lv_obj_t *label_humidty_level;
    lv_obj_t *obj5;
    lv_obj_t *label_relative_humidity_header_1;
    lv_obj_t *label_power_battery_percentage_1;
    lv_obj_t *label_battery_voltage_1;
    lv_obj_t *settings_list_main_menu;
    lv_obj_t *label_display_settings_button;
    lv_obj_t *buttons_settings_menu_about_label;
    lv_obj_t *container_display_settings;
    lv_obj_t *lbl_device08_status_ind_3;
    lv_obj_t *lbl_device08_status_ind_4;
    lv_obj_t *lbl_device08_status_ind_5;
    lv_obj_t *lbl_device08_status_ind_6;
    lv_obj_t *label_screen_timeout;
    lv_obj_t *label_screen_timeout_value;
    lv_obj_t *container_about_settings;
    lv_obj_t *label_about_header;
    lv_obj_t *label_version_number;
    lv_obj_t *conatiner_demo_settings;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_TRAILER = 2,
    SCREEN_ID_POWER = 3,
    SCREEN_ID_WATER = 4,
    SCREEN_ID_AIR = 5,
    SCREEN_ID_SETTINGS = 6,
};

void create_screen_main();
void tick_screen_main();

void create_screen_trailer();
void tick_screen_trailer();

void create_screen_power();
void tick_screen_power();

void create_screen_water();
void tick_screen_water();

void create_screen_air();
void tick_screen_air();

void create_screen_settings();
void tick_screen_settings();

void create_user_widget_top_nav_bar(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_top_nav_bar(void *flowState, int startWidgetIndex);

void create_user_widget_bottom_nav_bar(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_bottom_nav_bar(void *flowState, int startWidgetIndex);

enum Themes {
    THEME_ID_RIVIAN_LIGHT,
    THEME_ID_RIVIAN_DARK,
};
enum Colors {
    COLOR_ID_BACKGROUND_BLACK,
    COLOR_ID_BACKGROUND_CONTENT,
    COLOR_ID_BACKGROUND_PANEL,
    COLOR_ID_BACKGROUND_NOT_SELECTED,
    COLOR_ID_BACKGROUND_SELECTED,
    COLOR_ID_FOREGROUND_WHITE,
    COLOR_ID_ACCENT_COLOR,
    COLOR_ID_COOL,
    COLOR_ID_HOT,
    COLOR_ID_SUCCESS,
    COLOR_ID_PRIMARY_TEXT_COLOR,
    COLOR_ID_SECONDARY_TEXT_COLOR,
};
void change_color_theme(uint32_t themeIndex);
extern uint32_t theme_colors[2][12];

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/