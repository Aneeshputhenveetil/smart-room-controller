#include "led.h"
#include "driver/gpio.h"

#define LED_GPIO GPIO_NUM_2

static uint8_t led_status = 0;

void Led_Init(void)
{
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);
    gpio_set_level(LED_GPIO, 0);
}

void Led_On(void)
{
    gpio_set_level(LED_GPIO, 1);
    led_status = 1;
}

void Led_Off(void)
{
    gpio_set_level(LED_GPIO, 0);
    led_status = 0;
}

void Led_Toggle(void)
{
    led_status = !led_status;
    gpio_set_level(LED_GPIO, led_status);
}