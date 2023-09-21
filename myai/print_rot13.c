#include "print_rot13.h"
#include <unistd.h>

int _print_rot13(char *str, char *buffer, int *buf_index)
{
    int printed_chars = 0;
    int i;
    char rot13_map[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            if (*str >= 'A' && *str <= 'Z')
                i = *str - 'A';
            else
                i = *str - 'a' + 26;

            buffer[(*buf_index)++] = rot13_map[i];
            printed_chars++;
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

