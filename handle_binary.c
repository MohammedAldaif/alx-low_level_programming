#include "main.h"

/**
 * handle_binary - function
 * @n: input
 * @chars_count: input
 * Return: int.
 */

int handle_binary(unsigned int n, int chars_count)
{
	int array[32] = {0};
	int i = 0;

	if (n == 0)
	{
		_putchar(48);
		chars_count++;
		return (chars_count);
	}

	while (n > 0)
	{
		array[i] = n % 2;
		n /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(array[i] + 48);
		chars_count++;
	}

	return (chars_count);
}
