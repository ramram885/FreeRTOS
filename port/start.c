/*
When the ramya() function is called from start(), compiler tries to execute
the function ramya(). But we will end up with CPU crash. Because to execute
the another function call we need stack memory. But in our case we have not
initialized the correct value for stack pointer.
*/
void ramya () {
    return;
}

// Will call this C function from assembly program (boot.s) and let see what is happening
// To call this function from assembly program in reset_handler part branch this function and look the main.elf.lst file.
// E.x In boot.S file,
/* reset_handler:
   b start
*/
void start () {
    ramya();
    return;
}
