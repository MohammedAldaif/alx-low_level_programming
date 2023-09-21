#include "main.h"

/**
 * print_char - Prints a char
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    char char_to_print = va_arg(types, int);

    return (handle_write_char(char_to_print, buffer, flags, width, precision, size));
}

/**
 * print_string - Prints a string
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int len = 0, i;
    char *string = va_arg(types, char *);

    UNUSED(buffer);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);
    if (string == NULL)
    {
        string = "(null)";
        if (precision >= 6)
            string = "      ";
    }

    while (string[len] != '\0')
        len++;

    if (precision >= 0 && precision < len)
        len = precision;

    if (width > len)
    {
        if (flags & F_MINUS)
        {
            write(1, &string[0], len);
            for (i = width - len; i > 0; i--)
                write(1, " ", 1);
            return (width);
        }
        else
        {
            for (i = width - len; i > 0; i--)
                write(1, " ", 1);
            write(1, &string[0], len);
            return (width);
        }
    }

    return (write(1, string, len));
}

/**
 * print_percent - Prints a percent sign
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    UNUSED(types);
    UNUSED(buffer);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);
    return (write(1, "%%", 1));
}

/**
 * print_int - Print int
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    int i = BUFF_SIZE - 2;
    int is_negative = 0;
    long int number = va_arg(types, long int);
    unsigned long int num;

    number = convert_size_number(number, size);

    if (number == 0)
        buffer[i--] = '0';

    buffer[BUFF_SIZE - 1] = '\0';
    num = (unsigned long int)number;

    if (number < 0)
    {
        num = (unsigned long int)((-1) * number);
        is_negative = 1;
    }

    while (num > 0)
    {
        buffer[i--] = (num % 10) + '0';
        num /= 10;
    }

    i++;

    return (write_number(is_negative, i, buffer, flags, width, precision, size));
}

/************************* PRINT BINARY *************************/
/**
 * print_binary - Prints an unsigned number
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of char printed.
 */
int print_binary(va_list types, char buffer[],
    int flags, int width, int precision, int size)
{
    unsigned int n, m, i, sum;
    unsigned int array[32];
    int counter;

    UNUSED(buffer);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(precision);
    UNUSED(size);

    n = va_arg(types, unsigned int);
    m = 2147483648; /* (2 ^ 31) */
    array[0] = n / m;
    for (i = 1; i < 32; i++)
    {
        m /= 2;
        array[i] = (n / m) % 2;
    }
    for (i = 0, sum = 0, counter = 0; i < 32; i++)
    {
        sum += array[i];
        if (sum || i == 31)
        {
            char binary_char = '0' + array[i];

            write(1, &binary_char, 1);
            counter++;
        }
    }
    return (counter);
}
