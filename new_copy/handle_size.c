#include "main.h"

/**
 * get_size - Determines the size specifier for the argument
 * @format: The format string containing the format specifier
 * @index: Pointer to the current index in the format string
 *
 * Return: The size specifier for the argument (S_LONG, S_SHORT, or 0)
 */

int get_size(const char *format, int *index)
{
	int current_index = *index + 1;
	int argument_size = 0;

	if (format[current_index] == 'l')
		argument_size = S_LONG;
	else if (format[current_index] == 'h')
		argument_size = S_SHORT;

	if (argument_size == 0)
		*index = current_index - 1;
	else
		*index = current_index;

	return (argument_size);
}

