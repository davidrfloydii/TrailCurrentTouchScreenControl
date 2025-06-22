#ifndef EEZ_LVGL_UI_EVENTS_H
#define EEZ_LVGL_UI_EVENTS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void action_device_brightness_change(lv_event_t * e);
extern void action_hide_brightness_dialog(lv_event_t * e);
extern void action_display_brightness_dialog(lv_event_t * e);
extern void action_toggle_device_on_off(lv_event_t * e);
extern void action_turn_all_devices_off(lv_event_t * e);
extern void action_start_demo_light_sequence(lv_event_t * e);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_EVENTS_H*/