#include "main.h"

/**
 * handle_string - function
 * @list: input
 * @chars_count: input
 * Return: int.
 */

int handle_string(va_list list, int chars_count)
{
	char *string = va_arg(list, char *);

	while (*string)
	{
		_putchar(*string);
		string++;
		chars_count++;
	}
	return (chars_count);
}
