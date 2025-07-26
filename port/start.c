#include "FreeRTOS.h"  // The FreeRtos.h file will include our FreeRTOSConfig.h file into the compilation process.
#include "task.h"

/*
* In tasks.c file these functions will be passed as function pointers in xTaskCreate() functions parameters
* BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,...)
*/
static void vTask1(void *pvParameters) {
    volatile int a = 0;
    while (1) {
        a ++;
    };
}

static void vTask2(void *pvParameters) {
    volatile int b = 0;
    while (1) {
        b ++;
    };
}
void start () {

    BaseType_t xReturn;

    xReturn = xTaskCreate(vTask1, "T1", configMINIMAL_STACK_SIZE, NULL, 1, NULL);
    xReturn = xTaskCreate(vTask1, "T2", configMINIMAL_STACK_SIZE, NULL, 1, NULL);

    vTaskStartScheduler();
    return;
}
