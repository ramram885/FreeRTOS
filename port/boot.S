    .section .vectors
vector_table:
    .word __stack
    .word reset_handler
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word default
    .word xPortSysTickHandler // From /FreeRTOS-Kernel/portable/GCC/ARM_CM3
    .zero 400

    .section .text
    .align 1
    .type reset_handler %function
reset_handler:
    b start

    .section .text
    .align 1
    .type default, %function
default:
    b .
