#include "main.h"

void print_buffer(char buffer[], int *buffer_index);

/**
 * _printf - Custom printf function
 * @custom_format: Custom format string
 * Return: Number of printed characters.
 */

int _printf(const char *custom_format, ...)
{
    int i, print_chars = 0, chars = 0;
    int custom_flags, custom_width, custom_precision, custom_size, buffer_index = 0;
    va_list custom_list;
    char buffer[BUFF_SIZE];

    if (custom_format == NULL)
        return (-1);

    va_start(custom_list, custom_format);

    for (i = 0; custom_format && custom_format[i] != '\0'; i++)
    {
        if (custom_format[i] != '%')
        {
            buffer[buffer_index++] = custom_format[i];
            if (buffer_index == BUFF_SIZE)
                print_buffer(buffer, &buffer_index);
            print_chars++;
        }
        else
        {
            print_buffer(buffer, &buffer_index);
            custom_flags = get_flags(custom_format, &i);
            custom_width = get_width(custom_format, &i, custom_list);
            custom_precision = get_precision(custom_format, &i, custom_list);
            custom_size = get_size(custom_format, &i);
            ++i;
            chars = handle_print(custom_format, &i, custom_list, buffer,
                custom_flags, custom_width, custom_precision, custom_size);
            if (chars == -1)
                return (-1);
            print_chars += chars;
        }
    }

    print_buffer(buffer, &buffer_index);

    va_end(custom_list);

    return (print_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buffer_index: Index at which to add the next character, represents the length
 */

void print_buffer(char buffer[], int *buffer_index)
{
    if (*buffer_index > 0)
        write(1, &buffer[0], *buffer_index);

    *buffer_index = 0;
}
