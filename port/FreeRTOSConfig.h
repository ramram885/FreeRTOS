/*
* FreeRTOSConfig.h file defines the configurations needed to schedule the
* tasks like how many tasks are we needed and the priorites for each task
* (Like software configurations)
*/

#ifndef _CONFIG_H__     /* Make sure that the configuration is included only once */
#define _CONFIG_H__

#define configTICK_TYP_WIDTH_IN_BITS            TICK_TYPE_WIDTH_32_BITS
#define configUSE_16_BIT_TICKS                  1
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    1
#define configMINIMAL_STACK_SIZE                0x100
#define configMAX_PRIORITIES                    5
#define configUSE_PREEMPTION                    1
#define configUSE_IDLE_HOOK                     0
#define configUSE_TICK_HOOK                     0

#endif