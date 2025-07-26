void* memset(void *dst, int value, unsigned int size) {
    unsigned char *ptr = (unsigned char *)dst;
    unsigned char byte_value = (unsigned char)value;

    // Fill memory byte byte
    while (size > 0) {
        *ptr = byte_value;
        *ptr++;
        size--;
    }
}