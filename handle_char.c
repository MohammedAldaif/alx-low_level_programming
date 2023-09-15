#include "mymain.h"

/**
 * handle_char - function
 * @c: input
 * @chars_count: input
 * Return: void
 */

int handle_char(va_list list, int chars_count)
{
	int c = va_arg(list, int);
	
	write(1, &c, 1);
	return (chars_count++);
}
