#include "ui/ui.h"
#include "ui/actions.h"
#include "ui/vars.h"
#include "ui/styles.h"
#include "globals.h"
#include "driver/twai.h"
#include "ui/screens.h"
#include "gui/gui.h"
#include "gfx/gfx_sunton.h"

#define CAN_SEND_DEVICE_MESSAGE_IDENTIFIER 0x18

static void sendLightToggleMessage(int btn)
{
    // Configure message to transmit
    twai_message_t message;
    message.identifier = CAN_SEND_DEVICE_MESSAGE_IDENTIFIER;
    message.extd = false; // Using CAN 2.0 extended id allowing up to 536870911 identifiers
    message.rtr = false;
    message.data_length_code = 1;
    message.data[0] = (btn - 1);
    // Queue message for transmission
    twai_transmit(&message, pdMS_TO_TICKS(10));
}

void action_toggle_device_on_off(lv_event_t *e)
{
    sendLightToggleMessage((int)e->user_data);
}

void action_turn_all_devices_off(lv_event_t *e)
{
    // Configure message to transmit
    twai_message_t message;
    message.identifier = CAN_SEND_DEVICE_MESSAGE_IDENTIFIER;
    message.extd = false; // Using CAN 2.0 extended id allowing up to 536870911 identifiers
    message.rtr = false;
    message.data_length_code = 2;
    if (get_var_are_any_devices_on())
    {
        message.data[0] = 8;
        message.data[1] = 0;
    }
    else
    {
        message.data[0] = 9;
        message.data[1] = 1;
    }
    // Queue message for transmission
    twai_transmit(&message, pdMS_TO_TICKS(10));
}


void action_hide_brightness_dialog(lv_event_t *e)
{
    lv_obj_add_flag(objects.panel_brightness_adjustment, LV_OBJ_FLAG_HIDDEN);
}

void action_display_brightness_dialog(lv_event_t *e)
{
    int currentValue;
    switch ((int)e->user_data)
    {
    case 7:
        currentValue = get_var_pdm01_device01_status();
        break;
    case 6:
        currentValue = get_var_pdm01_device02_status();
        break;
    case 5:
        currentValue = get_var_pdm01_device03_status();
        break;
    case 4:
        currentValue = get_var_pdm01_device04_status();
        break;
    case 3:
        currentValue = get_var_pdm01_device05_status();
        break;
    case 2:
        currentValue = get_var_pdm01_device06_status();
        break;
    case 1:
        currentValue = get_var_pdm01_device07_status();
        break;
    case 0:
        currentValue = get_var_pdm01_device08_status();
        break;
    default:
        break;
    }
    lv_slider_set_value(objects.slider_device_brightness_change, currentValue, LV_ANIM_OFF);
    set_var_active_brightness_change_device_id((int)e->user_data);
    lv_obj_clear_flag(objects.panel_brightness_adjustment, LV_OBJ_FLAG_HIDDEN);
}

void action_device_brightness_change(lv_event_t *e)
{
    int sliderValue = lv_slider_get_value(objects.slider_device_brightness_change);
    // Configure message to transmit
    twai_message_t message;
    message.identifier = 0x15;
    message.extd = false; // Using CAN 2.0 extended id allowing up to 536870911 identifiers
    message.rtr = false;
    message.data_length_code = 2;
    message.data[0] = get_var_active_brightness_change_device_id();
    message.data[1] = sliderValue;
    // Queue message for transmission
    if (twai_transmit(&message, pdMS_TO_TICKS(10)) == ESP_OK)
    {
        // Serial.println("Message queued for transmission");
    }
    else
    {
        // Serial.println("Failed to queue message for transmission");
    }
}


void action_adjust_screen_brightness(lv_event_t *e) {
    int sliderValue = lv_slider_get_value(objects.slider_display_brightness);
    adjust_display_brightness(sliderValue);
}

void action_start_demo_light_sequence(lv_event_t *e) {
    twai_message_t message;
    message.identifier = 0x1E;
    message.extd = false; // Using CAN 2.0 extended id allowing up to 536870911 identifiers
    message.rtr = false;
    message.data_length_code = 1;
    message.data[0] = (int)e->user_data;
    // Queue message for transmission
    if (twai_transmit(&message, pdMS_TO_TICKS(10)) == ESP_OK)
    {
        // Serial.println("Message queued for transmission");
    }
    else
    {
        // Serial.println("Failed to queue message for transmission");
    }
}
