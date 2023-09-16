#include "main.h"

/**
 * handle_d_i - function
 * @list: input
 * @chars_count: input
 * Return: int.
 */

int handle_d_i(va_list list, int chars_count)
{
	int number = va_arg(list, int);
	int i;
	char array[20];
	int length = 0;

	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
		chars_count++;
	}
	do {
		array[length++] = (number % 10) + 48;
		number /=  10;
	} while (number > 0);
	for (i = length - 1; i >= 0; i--)
	{
		write(1, &array[i], 1);
		chars_count++;
	}
	return (chars_count);
}
