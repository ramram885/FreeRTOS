MEMORY
{
    FLASH : ORIGIN = 0x0, LENGTH = 128K    #Define the FLASH memory region of the STM32LDiscovery board
    RAM : ORIGIN = 0x20000000, LENGTH = 8K
}

SECTIONS
{
    .text : {
        *(.vectors)     # From my directory take all the sections that is named as .vectors
        *(.text)        # From my directory take all the sections that is named as .text
    } > FLASH           # Combine these two sections into .text section and place that section into FLASH Memory

    __StackTop = ORIGIN(RAM) + LENGTH(RAM);
    PROVIDE(__stack = __StackTop - 4);
}

