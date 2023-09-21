#include "main.h"

/**
 * get_width - Extracts and calculates the width for formatting
 * @format: The formatted string containing placeholders and flags.
 * @i: Current index within the format string.
 * @list: List of arguments to be formatted.
 *
 * This function parses the format string and extracts the width specifier
 * for formatting. The width can be a positive integer or an asterisk (*)
 * indicating that the width should be obtained from the argument list.
 *
 * Return: The calculated width for formatting.
 */

int get_width(const char *format, int *i, va_list list)
{
	int current_index;
	int width = 0;

	for (current_index = *i + 1; format[current_index] != '\0'; current_index++)
	{
		if (is_digit(format[current_index]))
		{
			width *= 10;
			width += format[current_index] - '0';
		}
		else if (format[current_index] == '*')
		{
			current_index++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = current_index - 1;

	return (width);
}
