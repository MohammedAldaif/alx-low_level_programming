#include "print_special_string.h"
#include <unistd.h>

int _print_special_string(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;

    if (str == NULL)
        return (0);

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            buffer[(*buf_index)++] = '\\';
            buffer[(*buf_index)++] = 'x';
            printed_chars += 2;

            // Print in uppercase hexadecimal
            buffer[(*buf_index)++] = (*str >> 4) + '0';
            buffer[(*buf_index)++] = (*str & 0xF) + '0';
            printed_chars += 2;
        }
        else
        {
            buffer[(*buf_index)++] = *str;
            printed_chars++;
        }

        if (*buf_index == 1024)
        {
            write(1, buffer, *buf_index);
            *buf_index = 0;
        }
        str++;
    }

    return (printed_chars);
}

