#include "main.h"

/**
 * _printf -entry point of the project
 * @format: input
 * Return: string.
 */

int _printf(const char *format, ...)
{
	int chars_count = 0;
	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			chars_count = handle_specifier(format, list, chars_count);
		}
		else
		{
			handle_char(*format);
			chars_count++;
		}
		format++;
	}
	va_end(args);
	return (chars_count);
}
