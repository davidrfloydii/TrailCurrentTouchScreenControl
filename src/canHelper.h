#pragma once
#include "globals.h"
#include "ui/ui.h"
#include "ui/vars.h"

#define CAN_RX 18
#define CAN_TX 17
// Interval:
#define POLLING_RATE_MS 1000
static bool driver_installed = false;

namespace canHelper
{
    void setupCan()
    {
        // Initialize configuration structures using macro initializers
        twai_general_config_t g_config = TWAI_GENERAL_CONFIG_DEFAULT((gpio_num_t)CAN_TX, (gpio_num_t)CAN_RX, TWAI_MODE_NO_ACK);
        twai_timing_config_t t_config = TWAI_TIMING_CONFIG_500KBITS(); // Look in the api-reference for other speed sets.
        // Filter to only listen for messages from a single extended can identifier. Will need to be changed once we have
        // two different senders. One for on/off and another for 0 >> 255 values.
        twai_filter_config_t f_config = TWAI_FILTER_CONFIG_ACCEPT_ALL();

        // Install TWAI driver
        if (twai_driver_install(&g_config, &t_config, &f_config) == ESP_OK)
        {
            debugln("Driver installed");
        }
        else
        {
            debugln("Failed to install driver");
            return;
        }

        // Start TWAI driver
        if (twai_start() == ESP_OK)
        {
            debugln("Driver started");
        }
        else
        {
            debugln("Failed to start driver");
            return;
        }

        // Reconfigure alerts to detect frame receive, Bus-Off error and RX queue full states
        uint32_t alerts_to_enable = TWAI_ALERT_RX_DATA | TWAI_ALERT_ERR_PASS | TWAI_ALERT_BUS_ERROR | TWAI_ALERT_RX_QUEUE_FULL;
        if (twai_reconfigure_alerts(alerts_to_enable, NULL) == ESP_OK)
        {
            debugln("CAN Alerts reconfigured");
        }
        else
        {
            debugln("Failed to reconfigure alerts");
            return;
        }

        // TWAI driver is now successfully installed and started
        driver_installed = true;
    }

    static void handle_rx_message(twai_message_t &message)
    {
        switch (message.identifier)
        {
        case 27:
            set_var_pdm01_device01_status(message.data[4]);
            set_var_pdm01_device02_status(message.data[7]);
            set_var_pdm01_device03_status(message.data[6]);
            set_var_pdm01_device04_status(message.data[5]);
            set_var_pdm01_device05_status(message.data[3]);
            set_var_pdm01_device06_status(message.data[2]);
            set_var_pdm01_device07_status(message.data[1]);
            set_var_pdm01_device08_status(message.data[0]);
            break;
        case 31:
        {
            debugln(message.data[0]);
            debugln(message.data[1]);
            debugln(message.data[2]);
            debugln(message.data[3]);
            set_var_current_interior_temperature(message.data[1]);
            uint8_t humidityWhole = message.data[2];
            uint8_t humidityDecimal = message.data[3];
            // Reassemble the humidity as a float
            float humidity = humidityWhole + (humidityDecimal / 100.0f);
            // Print the values for debugging
            printf("Humidity: %.2f%%\n", humidity);
            set_var_humidity_value(humidity);
        }
        break;
        case 35:
        {
            float batteryVoltage = message.data[0] + message.data[1] / 100.0;
            float batterySoc = message.data[5] + message.data[6] / 100.0;
            int32_t batterySocRounded = round(batterySoc);
            set_var_battery_voltage(batteryVoltage);
            set_var_battery_soc_percentage(batterySocRounded);
        }
        // Trail shunt messages
        break;
        case 36:
        {
            // ONLY REPRESET NEGATIVE NUMBERS FOR CONSUMPTION OF WATTS, WE WILL SET ANOTHER VARIABLE FOR IN WATTS
            if (message.data[0] == 255)
            {
                int wattage = ((message.data[1] << 8) | message.data[2]);
                set_var_current_power_consumption_in_watts(wattage);
            }
            else
            {
                // If we have a negative value then we are getting watts into the battery.
                int wattage = ((message.data[1] << 8) | message.data[2]);
                set_var_current_power_incoming(wattage);
                set_var_current_power_consumption_in_watts(0);
            }
            float ttg = (long(message.data[3]) << 8) | message.data[4];
            if (ttg == 65535)
            {
                set_var_power_time_to_go_measurement(-1); // Infinite
                set_var_power_time_to_go_measurement_type("Infinite");
            }
            else if (ttg > 1440)
            {
                float factor = pow(10, 1);
                // Convert to days
                set_var_power_time_to_go_measurement(round((ttg / 60 / 24) * factor) / factor);
                set_var_power_time_to_go_measurement_type("days");
            }
            else if (ttg > 60)
            {
                float factor = pow(10, 1);
                // Convert to hours
                set_var_power_time_to_go_measurement(round((ttg / 60) * factor) / factor);
                set_var_power_time_to_go_measurement_type("hrs");
            }
            // debugln(ttg);
        }
        break;
        case 44:
        {
            // Solar messages 01
            uint16_t solarWattage = ((uint16_t)message.data[2] << 8) | message.data[3];
            set_var_solar_wattage(solarWattage);
            switch (message.data[6])
            {
            case 0:
                set_var_solar_status("Off");
                break;
            case 1:
                set_var_solar_status("Low Power");
                break;
            case 2:
                set_var_solar_status("Fault");
                break;
            case 3:
                set_var_solar_status("Bulk");
                break;
            case 4:
                set_var_solar_status("Absorption");
                break;
            case 5:
                set_var_solar_status("Float");
                break;
            case 6:
                set_var_solar_status("Storage");
                break;
            case 7:
                set_var_solar_status("Equalize");
                break;
            case 9:
                set_var_solar_status("Inverting");
                break;
            case 11:
                set_var_solar_status("Power Supply");
                break;
            case 245:
                set_var_solar_status("Starting-up");
                break;
            case 246:
                set_var_solar_status("Repeated absorption");
                break;
            case 247:
                set_var_solar_status("Recondition");
                break;
            case 248:
                set_var_solar_status("BatterySafe");
                break;
            case 252:
                set_var_solar_status("External");
                break;
            default:
                set_var_solar_status("");
                break;
            }
        }
        break;
        default:
            break;
        }
    }

    void canLoop()
    {
        // Check if alert happened
        uint32_t alerts_triggered;
        twai_read_alerts(&alerts_triggered, pdMS_TO_TICKS(POLLING_RATE_MS));
        twai_status_info_t twaistatus;
        twai_get_status_info(&twaistatus);

        // Check if message is received
        if (alerts_triggered & TWAI_ALERT_RX_DATA)
        {
            // One or more messages received. Handle all.
            twai_message_t message;
            while (twai_receive(&message, 0) == ESP_OK)
            {
                handle_rx_message(message);
            }
        }
    }
}