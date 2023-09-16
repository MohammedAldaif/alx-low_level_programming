#include "main.h"

/**
 * handle_specifier - function
 * @list: input
 * @chars_count: input
 * @format: input
 * Return: int.
 */

int handle_specifier(const char *format, va_list list, int chars_count)
{
	if (*format == 'c')
	{
		_putchar(va_arg(list, int));
		chars_count++;
	}
	else if (*format == 's')
		handle_string(list, chars_count);
	else if (*format == '%')
	{
		_putchar('%');
		chars_count++;
	}
	else if (*format == 'd' || *format == 'i')
		chars_count = handle_d_i(list, chars_count);
	else if (*format == 'b')
		chars_count = handle_binary(va_arg(list,
					unsigned int), chars_count);
	else if (*format == 'u')
		chars_count = handle_unsigned_int(va_arg(list, unsigned int), chars_count);
	else if (*format == 'x' || *format == 'X')
	{
		chars_count = handle_hexadecimal(va_arg(list, unsigned int),
				chars_count, (*format == 'X') ? 1 : 0);
	}
	return (chars_count);
}
