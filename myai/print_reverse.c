#include "print_reverse.h"
#include <unistd.h>

int _print_reverse(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    int len = 0;

    while (str[len])
        len++;

    for (int i = len - 1; i >= 0; i--)
    {
        buffer[(*buf_index)++] = str[i];
        printed_chars++;
        if (*buf_index == 1024)
        {
            write(1, buffer, *buf_index);
            *buf_index = 0;
        }
    }

    return (printed_chars);
}

