#include "FreeRTOS.h"  // The FreeRtos.h file will include our FreeRTOSConfig.h file into the compilation process.
#include "task.h"

void start () {
    vTaskStartScheduler();
    return;
}
