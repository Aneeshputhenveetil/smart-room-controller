#include "scheduler.h"
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void Scheduler_Run(void)
{
    static uint32_t last_100ms = 0;
    static uint32_t last_500ms = 0;

    __uint32_t now = xTaskGetTickCount();

    if((now - last_100ms) >= pdMS_TO_TICKS(100))
    {
        printf("100ms task running \n");
        last_100ms = now;
    }

    if((now - last_500ms) >= pdMS_TO_TICKS(500))
    {
        printf("500ms task running \n");
        last_500ms = now;
    }
}