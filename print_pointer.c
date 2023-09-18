#include "print_pointer.h"
#include <unistd.h>

int _print_pointer(void *ptr, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned long int address = (unsigned long int)ptr;
    unsigned long int temp = address;
    unsigned long int divisor = 1;
    int i;

    buffer[(*buf_index)++] = '0';
    buffer[(*buf_index)++] = 'x';
    printed_chars += 2;

    while (temp / divisor > 15)
        divisor *= 16;

    while (divisor >= 1)
    {
        i = (temp / divisor) % 16;
        if (i < 10)
            buffer[(*buf_index)++] = i + '0';
        else
            buffer[(*buf_index)++] = i - 10 + 'a';

        printed_chars++;
        divisor /= 16;
    }

    return (printed_chars);
}

