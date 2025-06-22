#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_main_main(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_main_btn_device01(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)5;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)4;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device02(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)8;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)7;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device03(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)7;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)6;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device04(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)6;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)5;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device05(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)4;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)3;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device06(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SHORT_CLICKED) {
        e->user_data = (void *)3;
        action_toggle_device_on_off(e);
    }
    if (event == LV_EVENT_LONG_PRESSED) {
        e->user_data = (void *)2;
        action_display_brightness_dialog(e);
    }
}

static void event_handler_cb_main_btn_device07(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)2;
        action_toggle_device_on_off(e);
    }
}

static void event_handler_cb_main_btn_device08(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)1;
        action_toggle_device_on_off(e);
    }
}

static void event_handler_cb_main_obj0(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        action_turn_all_devices_off(e);
    }
}

static void event_handler_cb_main_button_brightness_dialog_close(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        action_hide_brightness_dialog(e);
    }
}

static void event_handler_cb_main_slider_device_brightness_change(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_RELEASED) {
        e->user_data = (void *)0;
        action_device_brightness_change(e);
    }
}

static void event_handler_cb_trailer_trailer(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_power_power(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_power_bar_battery_soc(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
}

static void event_handler_cb_power_power_arc_remaining_hours(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_arc_get_value(ta);
            if (tick_value_change_obj != ta) {
                assignIntegerProperty(flowState, 23, 3, value, "Failed to assign Value in Arc widget");
            }
        }
    }
}

static void event_handler_cb_water_water(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_water_bar_fresh_water_level(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
}

static void event_handler_cb_water_bar_grey_water_level(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
}

static void event_handler_cb_air_air(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_air_arc_relative_humidity(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_arc_get_value(ta);
            if (tick_value_change_obj != ta) {
                assignIntegerProperty(flowState, 5, 3, value, "Failed to assign Value in Arc widget");
            }
        }
    }
}

static void event_handler_cb_air_bar_battery_soc_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
}

static void event_handler_cb_settings_settings(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_SCREEN_LOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 0, e);
    }
    if (event == LV_EVENT_SCREEN_UNLOADED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 1, 1, e);
    }
}

static void event_handler_cb_settings_button_settings_list_menu_display(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 3, 0, e);
    }
}

static void event_handler_cb_settings_button_settings_list_menu_about(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)1;
        flowPropagateValueLVGLEvent(flowState, 5, 0, e);
    }
}

static void event_handler_cb_settings_button_settings_list_menu_demo(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_settings_slider_display_brightness(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_VALUE_CHANGED) {
        lv_obj_t *ta = lv_event_get_target(e);
        if (tick_value_change_obj != ta) {
            int32_t value = lv_slider_get_value(ta);
            if (tick_value_change_obj != ta) {
                assignIntegerProperty(flowState, 13, 3, value, "Failed to assign Value in Slider widget");
            }
        }
    }
}

static void event_handler_cb_settings_btn_theme_light(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 16, 0, e);
    }
}

static void event_handler_cb_settings_btn_theme_dark(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 18, 0, e);
    }
}

static void event_handler_cb_settings_button_screen_timeout_decrease(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 21, 0, e);
    }
}

static void event_handler_cb_settings_button_screen_timeout_increase(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 24, 0, e);
    }
}

static void event_handler_cb_settings_button_settings_demo_light_sequence_start(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        action_start_demo_light_sequence(e);
    }
}

static void event_handler_cb_settings_button_settings_demo_light_sequence_stop(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)1;
        action_start_demo_light_sequence(e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_main(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)0;
        flowPropagateValueLVGLEvent(flowState, 7, 0, e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_trailer(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)1;
        flowPropagateValueLVGLEvent(flowState, 9, 0, e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_power(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)2;
        flowPropagateValueLVGLEvent(flowState, 11, 0, e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_water(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)3;
        flowPropagateValueLVGLEvent(flowState, 13, 0, e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_air(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)4;
        flowPropagateValueLVGLEvent(flowState, 15, 0, e);
    }
}

static void event_handler_cb_bottom_nav_bar_button_settings(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = lv_event_get_user_data(e);
    
    if (event == LV_EVENT_PRESSED) {
        e->user_data = (void *)5;
        flowPropagateValueLVGLEvent(flowState, 17, 0, e);
    }
}

void create_screen_main() {
    void *flowState = getFlowState(0, 0);
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_main_main, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // MainTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.main_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 7);
        }
        {
            // PanelThermostat
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_thermostat = obj;
            lv_obj_set_pos(obj, 18, 73);
            lv_obj_set_size(obj, 412, 335);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_content_panel(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 4, 4);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Thermostat");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // ThermostatArcGroup
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.thermostat_arc_group = obj;
                    lv_obj_set_pos(obj, 10, 30);
                    lv_obj_set_size(obj, 367, 284);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_panel_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_arc_create(parent_obj);
                            objects.obj1 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 250, 250);
                            lv_arc_set_value(obj, 70);
                            add_style_arc_default(obj);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(0xff635c5c), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff746e6e), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 250, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_color(obj, lv_color_hex(0xff625d5d), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            objects.obj2 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 180, 180);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_panel_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 300, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff888484), LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelThermostatTempuratureSetting
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_thermostat_tempurature_setting = obj;
                            lv_obj_set_pos(obj, -1, -11);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "72°");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_top_nav_text_normal(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 40);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Fahrenheit");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // MainBottomToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.main_bottom_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 9), 12);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // PanelControlButtons
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_control_buttons = obj;
            lv_obj_set_pos(obj, 443, 73);
            lv_obj_set_size(obj, 332, 335);
            add_style_style_content_panel(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // BtnDevice01
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device01 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device01, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_ON_FOCUS|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_button_default(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice01StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device01_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf7b6");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                        }
                        {
                            // lblDevice01Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device01_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Under\nCabinet");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice02
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device02 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device02, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice02StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device02_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf2e7");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                        }
                        {
                            // lblDevice02Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device02_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Kitchen\nLights");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice03
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device03 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device03, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice03StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device03_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf52a");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice03Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device03_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Entry\nLights");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice04
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device04 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device04, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice04StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device04_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf0eb");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice04Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device04_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Main\nLights");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice05
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device05 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device05, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice05StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device05_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf54f");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice05Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device05_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Porch\nLight");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice06
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device06 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device06, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice06StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device06_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf8ff");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice06Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device06_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Trailer\nLights");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice07
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device07 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device07, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice07StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device07_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf773");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice07Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device07_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Water\nPump");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnDevice08
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_device08 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_btn_device08, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice08StatusInd
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device08_status_ind = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf1e6");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // lblDevice08Label
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device08_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Power\nOutlet");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.obj0 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 100, 100);
                    lv_obj_add_event_cb(obj, event_handler_cb_main_obj0, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblButtonAllLabel
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_button_all_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "All On");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // PanelBrightnessAdjustment
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_brightness_adjustment = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, LV_PCT(100), LV_PCT(100));
            lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_panel_modal_blocker(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 400, 160);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_panel_dialog(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 10);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Brightness");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // ButtonBrightnessDialogClose
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.button_brightness_dialog_close = obj;
                            lv_obj_set_pos(obj, 310, -13);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_obj_add_event_cb(obj, event_handler_cb_main_button_brightness_dialog_close, LV_EVENT_ALL, flowState);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_ON_FOCUS|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_button_circle(obj);
                            lv_obj_set_style_radius(obj, 32, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_min_width(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_max_width(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_min_height(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_max_height(obj, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &ui_font_fa32, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][10]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    objects.obj3 = obj;
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_label_set_text(obj, "\uf057");
                                    add_style_label_circle_button(obj);
                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][10]), LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // SliderDeviceBrightnessChange
                            lv_obj_t *obj = lv_slider_create(parent_obj);
                            objects.slider_device_brightness_change = obj;
                            lv_obj_set_pos(obj, 0, 65);
                            lv_obj_set_size(obj, LV_PCT(100), 20);
                            lv_slider_set_range(obj, 0, 255);
                            lv_slider_set_value(obj, 128, LV_ANIM_OFF);
                            lv_obj_add_event_cb(obj, event_handler_cb_main_slider_device_brightness_change, LV_EVENT_ALL, flowState);
                            add_style_style_default_slider(obj);
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
    void *flowState = getFlowState(0, 0);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 7);
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 9), 12);
}

void create_screen_trailer() {
    void *flowState = getFlowState(0, 1);
    lv_obj_t *obj = lv_obj_create(0);
    objects.trailer = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_trailer_trailer, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // TrailerTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.trailer_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 26);
        }
        {
            // TrailerBottomNavBar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.trailer_bottom_nav_bar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 2), 31);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 10, 70);
            lv_obj_set_size(obj, 470, 200);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_panel_default(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_img_set_src(obj, &img_trailer_side);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, -10, 70);
            lv_obj_set_size(obj, 300, 340);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_panel_default(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_img_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_img_set_src(obj, &img_trailer_back);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
    
    tick_screen_trailer();
}

void tick_screen_trailer() {
    void *flowState = getFlowState(0, 1);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 26);
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 2), 31);
}

void create_screen_power() {
    void *flowState = getFlowState(0, 2);
    lv_obj_t *obj = lv_obj_create(0);
    objects.power = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_power_power, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // PowerTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.power_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 45);
        }
        {
            // PanelSolarInput
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_solar_input = obj;
            lv_obj_set_pos(obj, 11, 70);
            lv_obj_set_size(obj, 219, 125);
            add_style_style_content_panel(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 30, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "\uf185");
                    add_style_label_fa32_icon(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 5, 20);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "\uf5ba");
                    add_style_label_fa32_icon(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // LabelRemainingCacpity_2
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_remaining_cacpity_2 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "WATTS");
                    add_style_label_nav_text_alternate(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // PanelChargeType
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_charge_type = obj;
            lv_obj_set_pos(obj, 10, 0);
            lv_obj_set_size(obj, 219, 60);
            add_style_style_content_panel(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelSolarStatus
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_solar_status = obj;
                    lv_obj_set_pos(obj, 86, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_nav_text_alternate(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // PanelShorePower
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_shore_power = obj;
            lv_obj_set_pos(obj, 11, -70);
            lv_obj_set_size(obj, 219, 125);
            add_style_style_content_panel(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelPowerShorePowerHeading
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_power_shore_power_heading = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Shore Power");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // LabelShorePowerConnectionStatus
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_shore_power_connection_status = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // PanelShorePowerIndicatorBackground
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.panel_shore_power_indicator_background = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 60, 60);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_panel_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_CHECKED);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // PanelShorePowerIndicatorForeground
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.panel_shore_power_indicator_foreground = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf1e6");
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_MAIN | LV_STATE_CHECKED);
                        }
                    }
                }
            }
        }
        {
            // PanelPowerBatteryStats
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_power_battery_stats = obj;
            lv_obj_set_pos(obj, -39, 70);
            lv_obj_set_size(obj, 223, 340);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_content_panel(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelPowerRemainingCacpity_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_power_remaining_cacpity_1 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Battery Status");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // BarBatterySoc
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    objects.bar_battery_soc = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 150, 256);
                    lv_obj_add_event_cb(obj, event_handler_cb_power_bar_battery_soc, LV_EVENT_ALL, flowState);
                    add_style_bar_default(obj);
                    lv_obj_set_style_radius(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 25, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelPowerBatteryPercentage
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_power_battery_percentage = obj;
                            lv_obj_set_pos(obj, -10, -20);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelBatteryVoltage
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_battery_voltage = obj;
                            lv_obj_set_pos(obj, -10, 30);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 44, -116);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "V");
                    add_style_label_nav_text_alternate(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // PanelPowerRemainingTime
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_power_remaining_time = obj;
            lv_obj_set_pos(obj, 488, 72);
            lv_obj_set_size(obj, 296, 335);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_content_panel(obj);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelPowerRemainingCacpity
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_power_remaining_cacpity = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Battery Consumption");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // PowerRemainingArcGroup
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.power_remaining_arc_group = obj;
                    lv_obj_set_pos(obj, 15, 31);
                    lv_obj_set_size(obj, 258, 257);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_panel_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // PowerArcRemainingHours
                            lv_obj_t *obj = lv_arc_create(parent_obj);
                            objects.power_arc_remaining_hours = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 250, 250);
                            lv_arc_set_range(obj, 0, 2000);
                            lv_obj_add_event_cb(obj, event_handler_cb_power_power_arc_remaining_hours, LV_EVENT_ALL, flowState);
                            add_style_arc_default(obj);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(0xff635c5c), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff746e6e), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 250, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_color(obj, lv_color_hex(0xff625d5d), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // PanelPowerRemainingCenter
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            objects.panel_power_remaining_center = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 180, 180);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_panel_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 300, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff7c7777), LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelTimeToGoMeasurementType
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_time_to_go_measurement_type = obj;
                            lv_obj_set_pos(obj, -43, -1);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_nav_text_alternate(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_RIGHT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelPowerRemainingTimeToGoValue
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_power_remaining_time_to_go_value = obj;
                            lv_obj_set_pos(obj, -32, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_top_nav_text_normal(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelPowerRemaining
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_power_remaining = obj;
                            lv_obj_set_pos(obj, 0, -60);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Remaining");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // LabelRemainingCacpity_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_remaining_cacpity_1 = obj;
                    lv_obj_set_pos(obj, -50, -5);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 50, -5);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "WATTS");
                    add_style_label_nav_text_alternate(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
        {
            // PowerBottomToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.power_bottom_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 30), 50);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj4 = obj;
            lv_obj_set_pos(obj, 381, 203);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_label_set_text(obj, "%");
            add_style_label_default(obj);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    
    tick_screen_power();
}

void tick_screen_power() {
    void *flowState = getFlowState(0, 2);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 45);
    {
        const char *new_val = evalTextProperty(flowState, 5, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_remaining_cacpity_2);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_remaining_cacpity_2;
            lv_label_set_text(objects.label_remaining_cacpity_2, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 8, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_solar_status);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_solar_status;
            lv_label_set_text(objects.label_solar_status, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 11, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_shore_power_connection_status);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_shore_power_connection_status;
            lv_label_set_text(objects.label_shore_power_connection_status, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 16, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.bar_battery_soc);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.bar_battery_soc;
            lv_bar_set_value(objects.bar_battery_soc, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 17, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_power_battery_percentage);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_power_battery_percentage;
            lv_label_set_text(objects.label_power_battery_percentage, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 18, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_battery_voltage);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_battery_voltage;
            lv_label_set_text(objects.label_battery_voltage, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 23, 3, "Failed to evaluate Value in Arc widget");
        int32_t cur_val = lv_arc_get_value(objects.power_arc_remaining_hours);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.power_arc_remaining_hours;
            lv_arc_set_value(objects.power_arc_remaining_hours, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 25, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_time_to_go_measurement_type);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_time_to_go_measurement_type;
            lv_label_set_text(objects.label_time_to_go_measurement_type, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 26, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_power_remaining_time_to_go_value);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_power_remaining_time_to_go_value;
            lv_label_set_text(objects.label_power_remaining_time_to_go_value, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 28, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_remaining_cacpity_1);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_remaining_cacpity_1;
            lv_label_set_text(objects.label_remaining_cacpity_1, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 30), 50);
}

void create_screen_water() {
    void *flowState = getFlowState(0, 3);
    lv_obj_t *obj = lv_obj_create(0);
    objects.water = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_water_water, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // WaterTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.water_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 64);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, 10, 70);
            lv_obj_set_size(obj, 385, 340);
            add_style_style_panel_default(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Fresh");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // BarFreshWaterLevel
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    objects.bar_fresh_water_level = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 150, 256);
                    lv_obj_add_event_cb(obj, event_handler_cb_water_bar_fresh_water_level, LV_EVENT_ALL, flowState);
                    add_style_bar_default(obj);
                    lv_obj_set_style_radius(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 25, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelPGreyWaterPercentage
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_pgrey_water_percentage = obj;
                            lv_obj_set_pos(obj, 0, -20);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, -10, 70);
            lv_obj_set_size(obj, 385, 340);
            add_style_style_panel_default(obj);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Grey");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // BarGreyWaterLevel
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    objects.bar_grey_water_level = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 150, 256);
                    lv_obj_add_event_cb(obj, event_handler_cb_water_bar_grey_water_level, LV_EVENT_ALL, flowState);
                    add_style_bar_default(obj);
                    lv_obj_set_style_radius(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 25, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelFreshWaterPercentage
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_fresh_water_percentage = obj;
                            lv_obj_set_pos(obj, 0, -20);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // WaterBottomToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.water_bottom_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 10), 69);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    
    tick_screen_water();
}

void tick_screen_water() {
    void *flowState = getFlowState(0, 3);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 64);
    {
        int32_t new_val = evalIntegerProperty(flowState, 4, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.bar_fresh_water_level);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.bar_fresh_water_level;
            lv_bar_set_value(objects.bar_fresh_water_level, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 5, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_pgrey_water_percentage);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_pgrey_water_percentage;
            lv_label_set_text(objects.label_pgrey_water_percentage, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        int32_t new_val = evalIntegerProperty(flowState, 8, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.bar_grey_water_level);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.bar_grey_water_level;
            lv_bar_set_value(objects.bar_grey_water_level, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 9, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_fresh_water_percentage);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_fresh_water_percentage;
            lv_label_set_text(objects.label_fresh_water_percentage, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 10), 69);
}

void create_screen_air() {
    void *flowState = getFlowState(0, 4);
    lv_obj_t *obj = lv_obj_create(0);
    objects.air = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_air_air, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    {
        lv_obj_t *parent_obj = obj;
        {
            // AirTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.air_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 83);
        }
        {
            // PanelRelativeHumity
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.panel_relative_humity = obj;
            lv_obj_set_pos(obj, 400, 72);
            lv_obj_set_size(obj, 384, 335);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_content_panel(obj);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelRelativeHumidityHeader
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_relative_humidity_header = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Relative Humidity");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // RelativeHumidityArcGroup
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.relative_humidity_arc_group = obj;
                    lv_obj_set_pos(obj, 58, 35);
                    lv_obj_set_size(obj, 258, 257);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_style_panel_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // ArcRelativeHumidity
                            lv_obj_t *obj = lv_arc_create(parent_obj);
                            objects.arc_relative_humidity = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 250, 250);
                            lv_obj_add_event_cb(obj, event_handler_cb_air_arc_relative_humidity, LV_EVENT_ALL, flowState);
                            add_style_arc_default(obj);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 20, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_color(obj, lv_color_hex(0xff635c5c), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff746e6e), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 250, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_left(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_color(obj, lv_color_hex(0xff625d5d), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // PanelRelativeHumidityCenter
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            objects.panel_relative_humidity_center = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 180, 180);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_panel_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 300, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xff888484), LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelRelativeHumidityMeasurementLabel
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_relative_humidity_measurement_label = obj;
                            lv_obj_set_pos(obj, 40, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "%");
                            add_style_label_nav_text_alternate(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelHumidtyLevel
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_humidty_level = obj;
                            lv_obj_set_pos(obj, -20, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_style_top_nav_text_normal(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // AirBottomToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.air_bottom_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 9), 88);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.obj5 = obj;
            lv_obj_set_pos(obj, 10, 70);
            lv_obj_set_size(obj, 373, 337);
            add_style_style_content_panel(obj);
            lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelRelativeHumidityHeader_1
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_relative_humidity_header_1 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Interior Temperature");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // BarBatterySoc_1
                    lv_obj_t *obj = lv_bar_create(parent_obj);
                    objects.bar_battery_soc_1 = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, 150, 256);
                    lv_bar_set_range(obj, 0, 120);
                    lv_obj_add_event_cb(obj, event_handler_cb_air_bar_battery_soc_1, LV_EVENT_ALL, flowState);
                    add_style_bar_default(obj);
                    lv_obj_set_style_radius(obj, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_top(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_left(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_right(obj, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_radius(obj, 25, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    lv_obj_set_style_outline_width(obj, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelPowerBatteryPercentage_1
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_power_battery_percentage_1 = obj;
                            lv_obj_set_pos(obj, 0, -20);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                        {
                            // LabelBatteryVoltage_1
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_battery_voltage_1 = obj;
                            lv_obj_set_pos(obj, 0, 30);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "F");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(theme_colors[eez_flow_get_selected_theme_index()][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
    }
    
    tick_screen_air();
}

void tick_screen_air() {
    void *flowState = getFlowState(0, 4);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 83);
    {
        int32_t new_val = evalIntegerProperty(flowState, 5, 3, "Failed to evaluate Value in Arc widget");
        int32_t cur_val = lv_arc_get_value(objects.arc_relative_humidity);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.arc_relative_humidity;
            lv_arc_set_value(objects.arc_relative_humidity, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 8, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_humidty_level);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_humidty_level;
            lv_label_set_text(objects.label_humidty_level, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 9), 88);
    {
        int32_t new_val = evalIntegerProperty(flowState, 12, 3, "Failed to evaluate Value in Bar widget");
        int32_t cur_val = lv_bar_get_value(objects.bar_battery_soc_1);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.bar_battery_soc_1;
            lv_bar_set_value(objects.bar_battery_soc_1, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 13, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_power_battery_percentage_1);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_power_battery_percentage_1;
            lv_label_set_text(objects.label_power_battery_percentage_1, new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_screen_settings() {
    void *flowState = getFlowState(0, 5);
    lv_obj_t *obj = lv_obj_create(0);
    objects.settings = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    lv_obj_add_event_cb(obj, event_handler_cb_settings_settings, LV_EVENT_ALL, flowState);
    add_style_style_screen_default(obj);
    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    {
        lv_obj_t *parent_obj = obj;
        {
            // SettingsTopToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.settings_top_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_top_nav_bar(obj, getFlowState(flowState, 0), 102);
        }
        {
            // SettingsListMainMenu
            lv_obj_t *obj = lv_list_create(parent_obj);
            objects.settings_list_main_menu = obj;
            lv_obj_set_pos(obj, 0, 60);
            lv_obj_set_size(obj, 160, 360);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            lv_obj_set_scrollbar_mode(obj, LV_SCROLLBAR_MODE_OFF);
            add_style_list_menu(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // ButtonSettingsListMenuDisplay
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_settings_list_menu_display = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_PCT(100), 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_settings_list_menu_display, LV_EVENT_ALL, flowState);
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_ON_FOCUS|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_button_list_menu_item(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelDisplaySettingsButton
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.label_display_settings_button = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Display");
                            add_style_label_list_menu_item(obj);
                        }
                    }
                }
                {
                    // ButtonSettingsListMenuAbout
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_settings_list_menu_about = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_PCT(100), 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_settings_list_menu_about, LV_EVENT_ALL, flowState);
                    add_style_button_list_menu_item(obj);
                    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // ButtonsSettingsMenuAboutLabel
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.buttons_settings_menu_about_label = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "About");
                            add_style_label_list_menu_item(obj);
                        }
                    }
                }
                {
                    // ButtonSettingsListMenuDemo
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_settings_list_menu_demo = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_PCT(100), 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_settings_list_menu_demo, LV_EVENT_ALL, flowState);
                    add_style_button_list_menu_item(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_LEFT_MID, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Demo");
                            add_style_label_list_menu_item(obj);
                        }
                    }
                }
            }
        }
        {
            // ContainerDisplaySettings
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.container_display_settings = obj;
            lv_obj_set_pos(obj, 160, 60);
            lv_obj_set_size(obj, 640, 360);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_INDICATOR | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 6);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Displays Settings");
                    add_style_label_secondary(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 40);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Screen Brightness");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // lblDevice08StatusInd_3
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.lbl_device08_status_ind_3 = obj;
                    lv_obj_set_pos(obj, 0, 67);
                    lv_obj_set_size(obj, 20, 20);
                    lv_label_set_text(obj, "\uf185");
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_label_fa16_icon(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_CHECKED);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // SliderDisplayBrightness
                    lv_obj_t *obj = lv_slider_create(parent_obj);
                    objects.slider_display_brightness = obj;
                    lv_obj_set_pos(obj, 40, 70);
                    lv_obj_set_size(obj, 510, 13);
                    lv_slider_set_range(obj, 2, 255);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_slider_display_brightness, LV_EVENT_ALL, flowState);
                    add_style_style_default_slider(obj);
                }
                {
                    // lblDevice08StatusInd_4
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.lbl_device08_status_ind_4 = obj;
                    lv_obj_set_pos(obj, -20, 60);
                    lv_obj_set_size(obj, 32, 32);
                    lv_label_set_text(obj, "\uf185");
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    add_style_label_fa32_icon(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 110);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Display Theme");
                    add_style_label_default(obj);
                }
                {
                    // BtnThemeLight
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_theme_light = obj;
                    lv_obj_set_pos(obj, 0, 140);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_btn_theme_light, LV_EVENT_ALL, flowState);
                    lv_obj_add_state(obj, LV_STATE_CHECKED);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice08StatusInd_5
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device08_status_ind_5 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf185");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // BtnThemeDark
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.btn_theme_dark = obj;
                    lv_obj_set_pos(obj, 100, 140);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_btn_theme_dark, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // lblDevice08StatusInd_6
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            objects.lbl_device08_status_ind_6 = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, 32, 32);
                            lv_label_set_text(obj, "\uf186");
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            add_style_label_fa32_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // LabelScreenTimeout
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_screen_timeout = obj;
                    lv_obj_set_pos(obj, -1, 208);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Screen Timeout (Minutes)");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // ButtonScreenTimeoutDecrease
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_screen_timeout_decrease = obj;
                    lv_obj_set_pos(obj, 0, 229);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_screen_timeout_decrease, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf068");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &ui_font_fa32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // LabelScreenTimeoutValue
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_screen_timeout_value = obj;
                    lv_obj_set_pos(obj, 135, 246);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_default(obj);
                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // ButtonScreenTimeoutIncrease
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_screen_timeout_increase = obj;
                    lv_obj_set_pos(obj, 189, 229);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_screen_timeout_increase, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    lv_obj_set_style_text_font(obj, &ui_font_fa32, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "+");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_font(obj, &ui_font_fa32, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // ContainerAboutSettings
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.container_about_settings = obj;
            lv_obj_set_pos(obj, 160, 60);
            lv_obj_set_size(obj, 640, 360);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
            lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_left(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelAboutHeader
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_about_header = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Current Version");
                    add_style_label_default(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_LEFT, LV_PART_MAIN | LV_STATE_CHECKED);
                }
                {
                    // LabelVersionNumber
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    objects.label_version_number = obj;
                    lv_obj_set_pos(obj, 0, 40);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_default(obj);
                }
            }
        }
        {
            // ConatinerDemoSettings
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.conatiner_demo_settings = obj;
            lv_obj_set_pos(obj, 160, 60);
            lv_obj_set_size(obj, 640, 360);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 10, 10);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "Light Sequence");
                    add_style_label_default(obj);
                }
                {
                    // ButtonSettingsDemoLightSequenceStart
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_settings_demo_light_sequence_start = obj;
                    lv_obj_set_pos(obj, 10, 40);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_settings_demo_light_sequence_start, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Interior");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonSettingsDemoLightSequenceStop
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    objects.button_settings_demo_light_sequence_stop = obj;
                    lv_obj_set_pos(obj, 120, 40);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_settings_button_settings_demo_light_sequence_stop, LV_EVENT_ALL, flowState);
                    add_style_style_button_default(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "Exterior");
                            add_style_label_default(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
        {
            // SettingsBottomToolbar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            objects.settings_bottom_toolbar = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            create_user_widget_bottom_nav_bar(obj, getFlowState(flowState, 35), 107);
            lv_obj_set_style_align(obj, LV_ALIGN_BOTTOM_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    
    tick_screen_settings();
}

void tick_screen_settings() {
    void *flowState = getFlowState(0, 5);
    tick_user_widget_top_nav_bar(getFlowState(flowState, 0), 102);
    {
        int32_t new_val = evalIntegerProperty(flowState, 13, 3, "Failed to evaluate Value in Slider widget");
        int32_t cur_val = lv_slider_get_value(objects.slider_display_brightness);
        if (new_val != cur_val) {
            tick_value_change_obj = objects.slider_display_brightness;
            lv_slider_set_value(objects.slider_display_brightness, new_val, LV_ANIM_OFF);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 23, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_screen_timeout_value);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_screen_timeout_value;
            lv_label_set_text(objects.label_screen_timeout_value, new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 28, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(objects.label_version_number);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = objects.label_version_number;
            lv_label_set_text(objects.label_version_number, new_val);
            tick_value_change_obj = NULL;
        }
    }
    tick_user_widget_bottom_nav_bar(getFlowState(flowState, 35), 107);
}

void create_user_widget_top_nav_bar(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            // PanelTopNavBar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_panel_nav_bar_top(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // LabelActivePageTitle
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_nav_text(obj);
                }
                {
                    // LabelInteriorTemperatureValue
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 2] = obj;
                    lv_obj_set_pos(obj, -70, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
                    lv_label_set_text(obj, "");
                    add_style_label_nav_text(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                {
                    // LabelInteriorTemperatureMeasurementType
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 3] = obj;
                    lv_obj_set_pos(obj, -50, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_label_set_text(obj, "");
                    add_style_label_nav_text_alternate(obj);
                    lv_obj_set_style_align(obj, LV_ALIGN_TOP_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
}

void tick_user_widget_top_nav_bar(void *flowState, int startWidgetIndex) {
    {
        const char *new_val = evalTextProperty(flowState, 0, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(((lv_obj_t **)&objects)[startWidgetIndex + 1]);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = ((lv_obj_t **)&objects)[startWidgetIndex + 1];
            lv_label_set_text(((lv_obj_t **)&objects)[startWidgetIndex + 1], new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 2, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(((lv_obj_t **)&objects)[startWidgetIndex + 2]);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = ((lv_obj_t **)&objects)[startWidgetIndex + 2];
            lv_label_set_text(((lv_obj_t **)&objects)[startWidgetIndex + 2], new_val);
            tick_value_change_obj = NULL;
        }
    }
    {
        const char *new_val = evalTextProperty(flowState, 3, 3, "Failed to evaluate Text in Label widget");
        const char *cur_val = lv_label_get_text(((lv_obj_t **)&objects)[startWidgetIndex + 3]);
        if (strcmp(new_val, cur_val) != 0) {
            tick_value_change_obj = ((lv_obj_t **)&objects)[startWidgetIndex + 3];
            lv_label_set_text(((lv_obj_t **)&objects)[startWidgetIndex + 3], new_val);
            tick_value_change_obj = NULL;
        }
    }
}

void create_user_widget_bottom_nav_bar(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex) {
    lv_obj_t *obj = parent_obj;
    {
        lv_obj_t *parent_obj = obj;
        {
            // PanelBottomNavBar
            lv_obj_t *obj = lv_obj_create(parent_obj);
            ((lv_obj_t **)&objects)[startWidgetIndex + 6] = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 60);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
            add_style_style_panel_nav_bar_bottom(obj);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // ButtonMain
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 0] = obj;
                    lv_obj_set_pos(obj, 48, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_main, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonMain
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 7] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf015");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_text_color(obj, lv_color_hex(0xffffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonTrailer
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 1] = obj;
                    lv_obj_set_pos(obj, 165, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_trailer, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonTrailer
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 8] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf8ff");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonPower
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 2] = obj;
                    lv_obj_set_pos(obj, 289, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_power, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonPower
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 9] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf0e7");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonWater
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 3] = obj;
                    lv_obj_set_pos(obj, 418, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_water, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonWater
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 10] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\ue005");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonAir
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 4] = obj;
                    lv_obj_set_pos(obj, 553, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_air, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonAir
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 11] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf72e");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
                {
                    // ButtonSettings
                    lv_obj_t *obj = lv_btn_create(parent_obj);
                    ((lv_obj_t **)&objects)[startWidgetIndex + 5] = obj;
                    lv_obj_set_pos(obj, 675, 5);
                    lv_obj_set_size(obj, 100, 50);
                    lv_obj_add_event_cb(obj, event_handler_cb_bottom_nav_bar_button_settings, LV_EVENT_ALL, flowState);
                    add_style_button_navbar_in_active(obj);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // LabelButtonSettings
                            lv_obj_t *obj = lv_label_create(parent_obj);
                            ((lv_obj_t **)&objects)[startWidgetIndex + 12] = obj;
                            lv_obj_set_pos(obj, 0, 0);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_label_set_text(obj, "\uf1de");
                            add_style_nav_bar_icon(obj);
                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                        }
                    }
                }
            }
        }
    }
}

void tick_user_widget_bottom_nav_bar(void *flowState, int startWidgetIndex) {
}

void change_color_theme(uint32_t theme_index) {
    lv_style_set_bg_color(get_style_style_screen_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][1]));
    
    lv_style_set_bg_color(get_style_style_panel_modal_blocker_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][1]));
    
    lv_style_set_bg_color(get_style_style_panel_dialog_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_bg_color(get_style_style_panel_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_text_color(get_style_label_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_text_color(get_style_label_default_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_text_color(get_style_label_secondary_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][11]));
    
    lv_style_set_text_color(get_style_label_nav_text_alternate_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_text_color(get_style_button_navbar_in_active_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_text_color(get_style_button_navbar_active_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_border_color(get_style_button_navbar_active_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_text_color(get_style_button_navbar_active_MAIN_PRESSED(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_bg_color(get_style_panel_screen_content_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][1]));
    
    lv_style_set_text_color(get_style_button_list_menu_item_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_button_list_menu_item_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_bg_color(get_style_style_content_panel_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_text_color(get_style_style_device_status_ind_on_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_text_color(get_style_style_device_status_ind_off_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_style_button_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_bg_color(get_style_style_button_default_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_border_color(get_style_style_button_default_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_style_default_slider_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_style_default_slider_KNOB_DEFAULT(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_bg_color(get_style_style_default_slider_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_text_color(get_style_label_fa_icon_active_MAIN_PRESSED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_button_circle_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_text_color(get_style_button_circle_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_arc_default_KNOB_DEFAULT(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_arc_color(get_style_arc_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_arc_color(get_style_arc_default_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_default_button_matrix_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_text_color(get_style_default_button_matrix_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_default_button_matrix_ITEMS_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_bg_color(get_style_default_button_matrix_ITEMS_CHECKED(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_bg_color(get_style_message_box_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_bg_color(get_style_checkbox_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_border_color(get_style_checkbox_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_text_color(get_style_checkbox_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_border_color(get_style_checkbox_default_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_text_color(get_style_checkbox_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_keyboard_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_bg_color(get_style_keyboard_default_ITEMS_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_bg_color(get_style_roller_default_SELECTED_DEFAULT(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_bg_color(get_style_roller_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][2]));
    
    lv_style_set_text_color(get_style_roller_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_bg_color(get_style_switch_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_bar_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_bar_default_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_bar_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_bg_color(get_style_led_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][3]));
    
    lv_style_set_bg_color(get_style_led_default_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_bg_color(get_style_spinner_default_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_arc_color(get_style_spinner_default_INDICATOR_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_arc_color(get_style_spinner_default_INDICATOR_FOCUSED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_spinner_default_INDICATOR_CHECKED(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_bg_color(get_style_spinner_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][6]));
    
    lv_style_set_arc_color(get_style_spinner_default_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][4]));
    
    lv_style_set_text_color(get_style_label_fa16_icon_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_text_color(get_style_label_fa16_icon_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_style_set_text_color(get_style_label_fa32_icon_MAIN_DEFAULT(), lv_color_hex(theme_colors[theme_index][10]));
    
    lv_style_set_text_color(get_style_label_fa32_icon_MAIN_CHECKED(), lv_color_hex(theme_colors[theme_index][5]));
    
    lv_obj_set_style_bg_color(objects.obj1, lv_color_hex(theme_colors[theme_index][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
    
    lv_obj_set_style_arc_color(objects.obj1, lv_color_hex(theme_colors[theme_index][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.button_brightness_dialog_close, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.button_brightness_dialog_close, lv_color_hex(theme_colors[theme_index][10]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.obj3, lv_color_hex(theme_colors[theme_index][10]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_solar_input, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_charge_type, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_solar_status, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_shore_power, lv_color_hex(theme_colors[theme_index][2]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_shore_power_indicator_background, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.panel_shore_power_indicator_background, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_shore_power_indicator_background, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_CHECKED);
    
    lv_obj_set_style_text_color(objects.panel_shore_power_indicator_foreground, lv_color_hex(theme_colors[theme_index][6]), LV_PART_MAIN | LV_STATE_CHECKED);
    
    lv_obj_set_style_bg_color(objects.panel_power_battery_stats, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_outline_color(objects.bar_battery_soc, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.bar_battery_soc, lv_color_hex(theme_colors[theme_index][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_power_battery_percentage, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_battery_voltage, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_power_remaining_time, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.power_arc_remaining_hours, lv_color_hex(theme_colors[theme_index][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
    
    lv_obj_set_style_arc_color(objects.power_arc_remaining_hours, lv_color_hex(theme_colors[theme_index][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.obj4, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_outline_color(objects.bar_fresh_water_level, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.bar_fresh_water_level, lv_color_hex(theme_colors[theme_index][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_pgrey_water_percentage, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_outline_color(objects.bar_grey_water_level, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.bar_grey_water_level, lv_color_hex(theme_colors[theme_index][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_fresh_water_percentage, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.panel_relative_humity, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.arc_relative_humidity, lv_color_hex(theme_colors[theme_index][6]), LV_PART_KNOB | LV_STATE_DEFAULT);
    
    lv_obj_set_style_arc_color(objects.arc_relative_humidity, lv_color_hex(theme_colors[theme_index][6]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.obj5, lv_color_hex(theme_colors[theme_index][3]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_outline_color(objects.bar_battery_soc_1, lv_color_hex(theme_colors[theme_index][4]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_bg_color(objects.bar_battery_soc_1, lv_color_hex(theme_colors[theme_index][4]), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_power_battery_percentage_1, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_obj_set_style_text_color(objects.label_battery_voltage_1, lv_color_hex(theme_colors[theme_index][5]), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    {
        int startWidgetIndex = 7;
    }
    
    {
        int startWidgetIndex = 12;
    }
    
    {
        int startWidgetIndex = 26;
    }
    
    {
        int startWidgetIndex = 31;
    }
    
    {
        int startWidgetIndex = 45;
    }
    
    {
        int startWidgetIndex = 50;
    }
    
    {
        int startWidgetIndex = 64;
    }
    
    {
        int startWidgetIndex = 69;
    }
    
    {
        int startWidgetIndex = 83;
    }
    
    {
        int startWidgetIndex = 88;
    }
    
    {
        int startWidgetIndex = 102;
    }
    
    {
        int startWidgetIndex = 107;
    }
    
    lv_obj_invalidate(objects.main);
    lv_obj_invalidate(objects.trailer);
    lv_obj_invalidate(objects.power);
    lv_obj_invalidate(objects.water);
    lv_obj_invalidate(objects.air);
    lv_obj_invalidate(objects.settings);
}

extern void add_style(lv_obj_t *obj, int32_t styleIndex);
extern void remove_style(lv_obj_t *obj, int32_t styleIndex);

static const char *screen_names[] = { "Main", "Trailer", "Power", "Water", "Air", "Settings" };
static const char *object_names[] = { "main", "trailer", "power", "water", "air", "settings", "main_top_toolbar", "main_top_toolbar__panel_top_nav_bar", "main_top_toolbar__label_active_page_title", "main_top_toolbar__label_interior_temperature_value", "main_top_toolbar__label_interior_temperature_measurement_type", "main_bottom_toolbar", "main_bottom_toolbar__button_main", "main_bottom_toolbar__button_trailer", "main_bottom_toolbar__button_power", "main_bottom_toolbar__button_water", "main_bottom_toolbar__button_air", "main_bottom_toolbar__button_settings", "main_bottom_toolbar__panel_bottom_nav_bar", "main_bottom_toolbar__label_button_main", "main_bottom_toolbar__label_button_trailer", "main_bottom_toolbar__label_button_power", "main_bottom_toolbar__label_button_water", "main_bottom_toolbar__label_button_air", "main_bottom_toolbar__label_button_settings", "trailer_top_toolbar", "trailer_top_toolbar__panel_top_nav_bar", "trailer_top_toolbar__label_active_page_title", "trailer_top_toolbar__label_interior_temperature_value", "trailer_top_toolbar__label_interior_temperature_measurement_type", "trailer_bottom_nav_bar", "trailer_bottom_nav_bar__button_main", "trailer_bottom_nav_bar__button_trailer", "trailer_bottom_nav_bar__button_power", "trailer_bottom_nav_bar__button_water", "trailer_bottom_nav_bar__button_air", "trailer_bottom_nav_bar__button_settings", "trailer_bottom_nav_bar__panel_bottom_nav_bar", "trailer_bottom_nav_bar__label_button_main", "trailer_bottom_nav_bar__label_button_trailer", "trailer_bottom_nav_bar__label_button_power", "trailer_bottom_nav_bar__label_button_water", "trailer_bottom_nav_bar__label_button_air", "trailer_bottom_nav_bar__label_button_settings", "power_top_toolbar", "power_top_toolbar__panel_top_nav_bar", "power_top_toolbar__label_active_page_title", "power_top_toolbar__label_interior_temperature_value", "power_top_toolbar__label_interior_temperature_measurement_type", "power_bottom_toolbar", "power_bottom_toolbar__button_main", "power_bottom_toolbar__button_trailer", "power_bottom_toolbar__button_power", "power_bottom_toolbar__button_water", "power_bottom_toolbar__button_air", "power_bottom_toolbar__button_settings", "power_bottom_toolbar__panel_bottom_nav_bar", "power_bottom_toolbar__label_button_main", "power_bottom_toolbar__label_button_trailer", "power_bottom_toolbar__label_button_power", "power_bottom_toolbar__label_button_water", "power_bottom_toolbar__label_button_air", "power_bottom_toolbar__label_button_settings", "water_top_toolbar", "water_top_toolbar__panel_top_nav_bar", "water_top_toolbar__label_active_page_title", "water_top_toolbar__label_interior_temperature_value", "water_top_toolbar__label_interior_temperature_measurement_type", "water_bottom_toolbar", "water_bottom_toolbar__button_main", "water_bottom_toolbar__button_trailer", "water_bottom_toolbar__button_power", "water_bottom_toolbar__button_water", "water_bottom_toolbar__button_air", "water_bottom_toolbar__button_settings", "water_bottom_toolbar__panel_bottom_nav_bar", "water_bottom_toolbar__label_button_main", "water_bottom_toolbar__label_button_trailer", "water_bottom_toolbar__label_button_power", "water_bottom_toolbar__label_button_water", "water_bottom_toolbar__label_button_air", "water_bottom_toolbar__label_button_settings", "air_top_toolbar", "air_top_toolbar__panel_top_nav_bar", "air_top_toolbar__label_active_page_title", "air_top_toolbar__label_interior_temperature_value", "air_top_toolbar__label_interior_temperature_measurement_type", "air_bottom_toolbar", "air_bottom_toolbar__button_main", "air_bottom_toolbar__button_trailer", "air_bottom_toolbar__button_power", "air_bottom_toolbar__button_water", "air_bottom_toolbar__button_air", "air_bottom_toolbar__button_settings", "air_bottom_toolbar__panel_bottom_nav_bar", "air_bottom_toolbar__label_button_main", "air_bottom_toolbar__label_button_trailer", "air_bottom_toolbar__label_button_power", "air_bottom_toolbar__label_button_water", "air_bottom_toolbar__label_button_air", "air_bottom_toolbar__label_button_settings", "settings_top_toolbar", "settings_top_toolbar__panel_top_nav_bar", "settings_top_toolbar__label_active_page_title", "settings_top_toolbar__label_interior_temperature_value", "settings_top_toolbar__label_interior_temperature_measurement_type", "settings_bottom_toolbar", "settings_bottom_toolbar__button_main", "settings_bottom_toolbar__button_trailer", "settings_bottom_toolbar__button_power", "settings_bottom_toolbar__button_water", "settings_bottom_toolbar__button_air", "settings_bottom_toolbar__button_settings", "settings_bottom_toolbar__panel_bottom_nav_bar", "settings_bottom_toolbar__label_button_main", "settings_bottom_toolbar__label_button_trailer", "settings_bottom_toolbar__label_button_power", "settings_bottom_toolbar__label_button_water", "settings_bottom_toolbar__label_button_air", "settings_bottom_toolbar__label_button_settings", "btn_device01", "btn_device02", "btn_device03", "btn_device04", "btn_device05", "btn_device06", "btn_device07", "btn_device08", "obj0", "button_brightness_dialog_close", "slider_device_brightness_change", "bar_battery_soc", "power_arc_remaining_hours", "bar_fresh_water_level", "bar_grey_water_level", "arc_relative_humidity", "bar_battery_soc_1", "button_settings_list_menu_display", "button_settings_list_menu_about", "button_settings_list_menu_demo", "slider_display_brightness", "btn_theme_light", "btn_theme_dark", "button_screen_timeout_decrease", "button_screen_timeout_increase", "button_settings_demo_light_sequence_start", "button_settings_demo_light_sequence_stop", "panel_thermostat", "thermostat_arc_group", "obj1", "obj2", "label_thermostat_tempurature_setting", "panel_control_buttons", "lbl_device01_status_ind", "lbl_device01_label", "lbl_device02_status_ind", "lbl_device02_label", "lbl_device03_status_ind", "lbl_device03_label", "lbl_device04_status_ind", "lbl_device04_label", "lbl_device05_status_ind", "lbl_device05_label", "lbl_device06_status_ind", "lbl_device06_label", "lbl_device07_status_ind", "lbl_device07_label", "lbl_device08_status_ind", "lbl_device08_label", "lbl_button_all_label", "panel_brightness_adjustment", "obj3", "panel_solar_input", "label_remaining_cacpity_2", "panel_charge_type", "label_solar_status", "panel_shore_power", "label_power_shore_power_heading", "label_shore_power_connection_status", "panel_shore_power_indicator_background", "panel_shore_power_indicator_foreground", "panel_power_battery_stats", "label_power_remaining_cacpity_1", "label_power_battery_percentage", "label_battery_voltage", "panel_power_remaining_time", "label_power_remaining_cacpity", "power_remaining_arc_group", "panel_power_remaining_center", "label_time_to_go_measurement_type", "label_power_remaining_time_to_go_value", "label_power_remaining", "label_remaining_cacpity_1", "obj4", "label_pgrey_water_percentage", "label_fresh_water_percentage", "panel_relative_humity", "label_relative_humidity_header", "relative_humidity_arc_group", "panel_relative_humidity_center", "label_relative_humidity_measurement_label", "label_humidty_level", "obj5", "label_relative_humidity_header_1", "label_power_battery_percentage_1", "label_battery_voltage_1", "settings_list_main_menu", "label_display_settings_button", "buttons_settings_menu_about_label", "container_display_settings", "lbl_device08_status_ind_3", "lbl_device08_status_ind_4", "lbl_device08_status_ind_5", "lbl_device08_status_ind_6", "label_screen_timeout", "label_screen_timeout_value", "container_about_settings", "label_about_header", "label_version_number", "conatiner_demo_settings" };
static const char *style_names[] = { "StyleScreenDefault", "StylePanelModalBlocker", "StylePanelDialog", "StylePanelDefault", "StyleButtonSucces", "StylePanelNavBarBottom", "PanelNavBarTop", "LabelDefault", "LabelSecondary", "LabelNavTextAlternate", "LabelNavText", "PanelNavBar", "ButtonNavbarInActive", "ButtonNavbarActive", "PanelScreenContent", "ListDefault", "ListMenu", "ButtonListMenuItem", "LabelListMenuItem", "StyleContentPanel", "StyleTopNavTextNormal", "StyleDeviceStatusIndOn", "StyleDeviceStatusIndOff", "StyleButtonDefault", "NavBarIcon", "StyleDefaultSlider", "LabelFaIconActive", "ButtonCircle", "LabelCircleButton", "ArcDefault", "DefaultButtonMatrix", "MessageBoxDefault", "TabViewDefault", "TabDefault", "CheckboxDefault", "DropdownDefault", "KeyboardDefault", "RollerDefault", "SwitchDefault", "BarDefault", "LEDDefault", "SpinnerDefault", "LabelFa16Icon", "LabelFa32Icon" };
static const char *theme_names[] = { "RivianLight", "RivianDark" };

uint32_t theme_colors[2][12] = {
    { 0xff000000, 0xffebebeb, 0xffe3f2dc, 0xffd0e2c7, 0xff5f635a, 0xffffffff, 0xff51a441, 0xff49e6ff, 0xffff5553, 0xff74fe00, 0xff000000, 0xff83a79b },
    { 0xff000000, 0xff646667, 0xff5b6768, 0xff859194, 0xff9db8bb, 0xffffffff, 0xff00d003, 0xff49e6ff, 0xffff5553, 0xff74fe00, 0xffffffff, 0xffe3f2ee },
};


typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
    tick_screen_trailer,
    tick_screen_power,
    tick_screen_water,
    tick_screen_air,
    tick_screen_settings,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    eez_flow_init_styles(add_style, remove_style);
    
    eez_flow_init_screen_names(screen_names, sizeof(screen_names) / sizeof(const char *));
    eez_flow_init_object_names(object_names, sizeof(object_names) / sizeof(const char *));
    eez_flow_init_style_names(style_names, sizeof(style_names) / sizeof(const char *));
    eez_flow_init_themes(theme_names, sizeof(theme_names) / sizeof(const char *), change_color_theme);
    
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
    create_screen_trailer();
    create_screen_power();
    create_screen_water();
    create_screen_air();
    create_screen_settings();
}
