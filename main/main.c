#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

#define LED_PIN 2
static const char* TAG = "LAB1";

void app_main(void)
{
  esp_rom_gpio_pad_select_gpio(LED_PIN);
  gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
  int ON = 0;
while(true)
{
   ON = !ON;
   ESP_LOGI(TAG, "Turning the LED %s!", ON == true ? "ON" : "OFF");
   gpio_set_level(LED_PIN, ON);
   vTaskDelay(500/ portTICK_PERIOD_MS);
}
}