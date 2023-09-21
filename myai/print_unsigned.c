#include "main.h"
#include <unistd.h>
#include <stdint.h>
#include <stdio.h> // Added for debugging, you can remove it in the final code

int _print_unsigned(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width, int precision)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int divisor = 1;
    int i;
    int num_digits = 0;

    // Calculate the number of digits in the number
    while (temp / divisor > 0)
    {
        divisor *= 10;
        num_digits++;
    }

    // Handle precision
    if (precision >= 0)
    {
        int precision_padding = precision - num_digits;

        while (precision_padding-- > 0)
        {
            buffer[(*buf_index)++] = '0';
            printed_chars++;
        }
    }

    // If width is specified and greater than the number of digits, print padding
    if (width > num_digits)
    {
        int padding = width - num_digits;

        if (flags & FLAG_PLUS || flags & FLAG_SPACE || n < 0)
            padding--;

        while (padding > 0)
        {
            buffer[(*buf_index)++] = (flags & FLAG_ZERO && precision < 0) ? '0' : ' ';
            printed_chars++;
            padding--;
        }
    }

    if (length == 'l')
    {
        // Handle 'l' length modifier for 'u'
        unsigned long long ulltemp = (unsigned long long)temp;

        while (ulltemp / divisor > 9)
            divisor *= 10;

        while (divisor >= 1)
        {
            i = (ulltemp / divisor) % 10;
            buffer[(*buf_index)++] = i + '0';
            printed_chars++;
            divisor /= 10;
        }
    }
    else if (length == 'h')
    {
        // Handle 'h' length modifier for 'u'
        unsigned short ustemp = (unsigned short)temp;

        while (ustemp / divisor > 9)
            divisor *= 10;

        while (divisor >= 1)
        {
            i = (ustemp / divisor) % 10;
            buffer[(*buf_index)++] = i + '0';
            printed_chars++;
            divisor /= 10;
        }
    }
    else
    {
        // Default case, no length modifier
        while (temp / divisor > 9)
            divisor *= 10;

        while (divisor >= 1)
        {
            i = (temp / divisor) % 10;
            buffer[(*buf_index)++] = i + '0';
            printed_chars++;
            divisor /= 10;
        }
    }

    return printed_chars;
}

