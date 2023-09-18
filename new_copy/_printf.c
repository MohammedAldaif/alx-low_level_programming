#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Custom printf function
 * @custom_format: Custom format string
 * Return: Number of printed characters.
 */

int _printf(const char *custom_format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int custom_flags, custom_width, custom_precision, custom_size, buff_ind = 0;
	va_list custom_list;
	char buffer[BUFF_SIZE];

	if (custom_format == NULL)
		return (-1);

	va_start(custom_list, custom_format);

	for (i = 0; custom_format && custom_format[i] != '\0'; i++)
	{
		if (custom_format[i] != '%')
		{
			buffer[buff_ind++] = custom_format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			custom_flags = get_flags(custom_format, &i);
			custom_width = get_width(custom_format, &i, custom_list);
			custom_precision = get_precision(custom_format, &i, custom_list);
			custom_size = get_size(custom_format, &i);
			++i;
			printed = handle_print(custom_format, &i, custom_list, buffer,
				custom_flags, custom_width, custom_precision, custom_size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(custom_list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Index at which to add the next character, represents the length
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

