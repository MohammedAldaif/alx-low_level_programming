
iifndef MAInt - Prints an integer with precision handling
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width specifier
 * @precision: Precision specifier
 * @size: Size specifier
 *
 * Return: Number of characters printed
 */
int print_int(va_list types, char buffer[], int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    int is_negative = 0;
    long int n = va_arg(types, long int);
    unsigned long int num;

    n = convert_size_number(n, size);

    if (n == 0)
        buffer[i--] = '0';

    buffer[BUFF_SIZE - 1] = '\0';
    num = (unsigned long int)n;

    if (n < 0)
    {
        num = (unsigned long int)((-1) * n);
        is_negative = 1;
    }

    int num_digits = 0;
    unsigned long int temp_num = num;
    while (temp_num > 0)
    {
        temp_num /= 10;
        num_digits++;
    }

    if (precision > 0 && precision < num_digits)
    {
        num_digits = precision;
    }

    for (int j = num_digits - 1; j >= 0; j--)
    {
        buffer[i--] = (num % 10) + '0';
        num /= 10;
    }

    i++;

    return write_number(is_negative, i, buffer, flags, width, 0, size);
}
N_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define FLAG_PLUS   (1 << 0)
#define FLAG_SPACE  (1 << 1)
#define FLAG_HASH   (1 << 2)
#define FLAG_MINUS  (1 << 3)
#define FLAG_ZERO   (1 << 4)

int _printf(const char *format, ...);
int _print_char(va_arg(args, int), buffer, &buffer_index);
int _print_string(va_arg(args, char *), buffer, &buffer_index);
int _print_percent(buffer, &buffer_index);
int _print_integer(va_arg(args, int),char* buffer, &buffer_index, flags, length, width, precision);
int _print_binary(va_arg(args, unsigned int), buffer, &buffer_index);
int _print_unsigned(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
int _print_octal(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
int _print_hex_lower(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
int _print_hex_upper(va_arg(args, unsigned int), buffer, &buffer_index, flags, length, width, precision);
int _print_special_string(va_arg(args, char *), buffer, &buffer_index);
int _print_pointer(void *ptr, char *buffer, int *buf_index);
int _print_reverse(char *str, char *buffer, int *buf_index);
int _print_rot13(char *str, char *buffer, int *buf_index);

#endif /* MAIN_H */

