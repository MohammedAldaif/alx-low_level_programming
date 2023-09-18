#include "main.h"
#include <unistd.h>

int _print_binary(unsigned int n, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
    int leading_zero = 1;

    for (; mask > 0; mask >>= 1)
    {
        if ((n & mask) || !leading_zero)
        {
            buffer[(*buf_index)++] = ((n & mask) ? '1' : '0');
            printed_chars++;
            leading_zero = 0;
        }
    }

    if (printed_chars == 0)
    {
        buffer[(*buf_index)++] = '0';
        printed_chars++;
    }

    return printed_chars;
}

