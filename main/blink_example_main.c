
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#define BLINK_GPIO 2

static uint8_t s_led_state = 0;
static void blink_led(void)
{
    /* Set the GPIO level according to the state (LOW or HIGH)*/
    gpio_set_level(BLINK_GPIO, s_led_state);
}
static void configure_led(void)
{
    // ESP_LOGI(TAG, "Example configured to blink GPIO LED!");
    gpio_reset_pin(BLINK_GPIO);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}
void app_main(void)
{
    /* Configure the peripheral according to the LED type */
    configure_led();
    while (1) {
        //ESP_LOGI(TAG, 
        printf("Turning the LED %s!", s_led_state == true ? "ON" : "OFF"), "\n";
        blink_led();
        /* Toggle the LED state */
        s_led_state = !s_led_state;
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}