#include "main.h"

/**
 * handle_unsigned_int - function
 * @n: input
 * @chars_count: input
 * Return: int.
 */

int handle_unsigned_int(unsigned int n, int chars_count)
{
	int digit = 0;
	unsigned int temp = n;

	do {
		digit++;
		temp = temp / 10;
	} while (temp != 0);

	if (n == 0)
	{
		_putchar(48);
		chars_count++;
	}
	else
	{
		char string[11];
		int i = 0;

		while (n != 0)
		{
			string[i] = (n % 10) + 48;
			n = n / 10;
			i++;
		}
		for (i = digit - 1; i >= 0; i--)
		{
			_putchar(string[i]);
			chars_count++;
		}
	}
	return (chars_count);
}
