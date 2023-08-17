#include "main.h"

/**
 * print_number - function
 * @n: input
 */

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(48 + n % 10);
}
