#include "main.h"
#include <unistd.h>
#include <stdint.h>

int _print_octal(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width, int precision)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int octal_num = 0;
    int octal_digits[32]; // Maximum 32 bits

    if (n == 0)
    {
        if (flags & FLAG_HASH || precision == 0)
        {
            // Print '0' for zero values when '#' flag is set or precision is 0
            buffer[(*buf_index)++] = '0';
            printed_chars++;
        }
        else
        {
            // Print nothing for zero values without '#' flag and precision > 0
            return 0;
        }
    }

    if (length == 'l')
    {
        // Handle 'l' (long) length modifier
        unsigned long long ulltemp = (unsigned long long)temp;

        while (ulltemp != 0)
        {
            octal_digits[octal_num++] = ulltemp % 8;
            ulltemp /= 8;
        }
    }
    else if (length == 'h')
    {
        // Handle 'h' (short) length modifier
        unsigned short ustemp = (unsigned short)temp;

        while (ustemp != 0)
        {
            octal_digits[octal_num++] = ustemp % 8;
            ustemp /= 8;
        }
    }
    else
    {
        // Default case, no length modifier
        while (temp != 0)
        {
            octal_digits[octal_num++] = temp % 8;
            temp /= 8;
        }
    }

    // Calculate the number of padding zeros needed
    int num_padding_zeros = (precision > octal_num) ? precision - octal_num : 0;
    int num_padding_spaces = (width > octal_num + num_padding_zeros) ? width - (octal_num + num_padding_zeros) : 0;

    if (flags & FLAG_HASH || precision > 0)
    {
        // If '#' flag is set or precision is greater than 0, print a '0' prefix for nonzero values
        buffer[(*buf_index)++] = '0';
        printed_chars++;
    }

    while (num_padding_zeros > 0)
    {
        // Print leading zeros for precision
        buffer[(*buf_index)++] = '0';
        printed_chars++;
        num_padding_zeros--;
    }

    while (num_padding_spaces > 0 && !(flags & FLAG_MINUS))
    {
        // Print leading spaces for padding (if '-' flag is not set)
        buffer[(*buf_index)++] = ' ';
        printed_chars++;
        num_padding_spaces--;
    }

    for (int i = octal_num - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = octal_digits[i] + '0';
        printed_chars++;
    }

    while (num_padding_spaces > 0)
    {
        // Print trailing spaces for padding (if '-' flag is set)
        buffer[(*buf_index)++] = ' ';
        printed_chars++;
        num_padding_spaces--;
    }

    return printed_chars;
}

