#include "main.h"
#include <unistd.h>
#include <stdint.h>

int _print_hex_lower(unsigned int n, char *buffer, int *buf_index, int flags, char length, int width, int precision)
{
    int printed_chars = 0;
    unsigned int temp = n;
    unsigned int hex_digits[32]; // Maximum 32 bits

    if (n == 0 && precision == 0)
    {
        // Print nothing for zero values when precision is 0
        return 0;
    }

    if (flags & FLAG_HASH)
    {
        // Print '0x' prefix for nonzero values when '#' flag is set
        buffer[(*buf_index)++] = '0';
        buffer[(*buf_index)++] = 'x';
        printed_chars += 2;
    }

    if (length == 'l')
    {
        // Handle 'l' length modifier for 'x'
        unsigned long long ulltemp = (unsigned long long)temp;

        while (ulltemp != 0)
        {
            int remainder = ulltemp % 16;
            if (remainder < 10)
                hex_digits[printed_chars++] = remainder + '0';
            else
                hex_digits[printed_chars++] = remainder - 10 + 'a';

            ulltemp /= 16;
        }
    }
    else if (length == 'h')
    {
        // Handle 'h' length modifier for 'x'
        unsigned short ustemp = (unsigned short)temp;

        while (ustemp != 0)
        {
            int remainder = ustemp % 16;
            if (remainder < 10)
                hex_digits[printed_chars++] = remainder + '0';
            else
                hex_digits[printed_chars++] = remainder - 10 + 'a';

            ustemp /= 16;
        }
    }
    else
    {
        // Default case, no length modifier
        while (temp != 0)
        {
            int remainder = temp % 16;
            if (remainder < 10)
                hex_digits[printed_chars++] = remainder + '0';
            else
                hex_digits[printed_chars++] = remainder - 10 + 'a';

            temp /= 16;
        }
    }

    // Calculate the number of padding zeros needed
    int num_padding_zeros = (precision > printed_chars) ? precision - printed_chars : 0;
    int num_padding_spaces = (width > printed_chars + num_padding_zeros) ? width - (printed_chars + num_padding_zeros) : 0;

    while (num_padding_spaces > 0 && !(flags & FLAG_MINUS))
    {
        // Print leading spaces for padding (if '-' flag is not set)
        buffer[(*buf_index)++] = ' ';
        printed_chars++;
        num_padding_spaces--;
    }

    if (flags & FLAG_HASH)
    {
        // If '#' flag is set, print a '0' prefix for nonzero values
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

    // Print the hex digits
    for (int i = printed_chars - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = hex_digits[i];
    }

    while (num_padding_spaces > 0)
    {
        // Print trailing spaces for padding (if '-' flag is set)
        buffer[(*buf_index)++] = ' ';
        printed_chars++;
        num_padding_spaces--;
    }

    return (printed_chars);
}

