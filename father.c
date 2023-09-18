#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: a character string with format specifiers
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    char buffer[1024];
    int buffer_index = 0;
    int flags = 0;
    char length = '\0';
    int width = 0;      // Added field width
    int precision = -1; // Added precision

    #define FLAG_PLUS   (1 << 0)
    #define FLAG_SPACE  (1 << 1)
    #define FLAG_HASH   (1 << 2)
    #define FLAG_MINUS  (1 << 3) // Added for left-justified output
    #define FLAG_ZERO   (1 << 4) // Added for zero-padding

    va_start(args, format);

    while (format && *format)
    {
        if (*format != '%')
        {
            /* Add characters to buffer */
            buffer[buffer_index++] = *format;
            if (buffer_index == 1024)
            {
                /* Buffer is full, flush it */
                write(1, buffer, buffer_index);
                printed_chars += buffer_index;
                buffer_index = 0;
            }
        }
        else
        {
            format++;
            if (*format == '\0')
                break;
            flags = 0;

            while (*format == '+' || *format == ' ' || *format == '#' || *format == '-' || *format == '0')
            {
                if (*format == '+')
                    flags |= FLAG_PLUS;
                else if (*format == ' ')
                    flags |= FLAG_SPACE;
                else if (*format == '#')
                    flags |= FLAG_HASH;
                else if (*format == '-')
                    flags |= FLAG_MINUS;
                else if (*format == '0')
                    flags |= FLAG_ZERO;
                format++;
            }

            // Check for field width
            if (*format >= '1' && *format <= '9')
            {
                width = 0;
                while (*format >= '0' && *format <= '9')
                {
                    width = width * 10 + (*format - '0');
                    format++;
                }
            }
            else
            {
                width = 0;
            }

            // Check for precision
            if (*format == '.')
            {
                format++;
                if (*format >= '0' && *format <= '9')
                {
                    precision = 0;
                    while (*format >= '0' && *format <= '9')
                    {
                        precision = precision * 10 + (*format - '0');
                        format++;
                    }
                }
                else
                {
                    precision = -1; // Precision not specified
                }
            }
            else
            {
                precision = -1; // Precision not specified
            }

            // Check for length modifiers
            if (*format == 'l' || *format == 'h')
            {
                length = *format;
                format++;
            }
            else
            {
                length = '\0';
            }

            switch (*format)
            {
                /* Handle format specifiers */
                case 'c':
                    // Modify _print_char to handle width and precision
                    printed_chars += _print_char(va_arg(args, int), buffer, &buffer_index);
                    break;
                case 's':
                    // Modify _print_string to handle width and precision
                    printed_chars += _print_string(va_arg(args, char *), buffer, &buffer_index);
                    break;
                case '%':
                    printed_chars += _print_percent(buffer, &buffer_index);
                    break;
                case 'd':
                case 'i':
                    // Modify _print_integer to handle width and precision
                    printed_chars += _print_integer(va_arg(args, int), buffer, &buffer_index, flags, length, width, precision);
                    break;
                case 'b':
                    printed_chars += _print_binary(va_arg(args, unsigned int), buffer, &buffer_index);
                    break;
                case 'u':
                    // Modify _print_unsigned to handle width and precision
                    printed_chars += _print_unsigned(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
                    break;
                case 'o':
                    // Modify _print_octal to handle width and precision
                    printed_chars += _print_octal(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
                    break;
                case 'x':
                    // Modify _print_hex_lower to handle width and precision
                    printed_chars += _print_hex_lower(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
                    break;
                case 'X':
                    // Modify _print_hex_upper to handle width and precision
                    printed_chars += _print_hex_upper(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
                    break;
                case 'S':
                    printed_chars += _print_special_string(va_arg(args, char *), buffer, &buffer_index);
                    break;
                case 'p':
                    printed_chars += _print_pointer(va_arg(args, void *), buffer, &buffer_index);
                    break;
                case 'r':
                    printed_chars += _print_reverse(va_arg(args, char *), buffer, &buffer_index);
                    break;
                case 'R':
                    printed_chars += _print_rot13(va_arg(args, char *), buffer, &buffer_index);
                    break;
                default:
                    /* Invalid specifier, skip it */
                    buffer[buffer_index++] = '%';
                    buffer[buffer_index++] = *format;
                    break;
            }
        }
        format++;
    }

    /* Flush any remaining characters in the buffer */
    write(1, buffer, buffer_index);
    printed_chars += buffer_index;

    va_end(args);

    return (printed_chars);
}

