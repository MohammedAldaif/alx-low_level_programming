#include "main.h"

#define bit32_range (4294967296)

void print_binary(long int n);

/**
 * print_positive_binary - print the binary representation of a positive number
 * @number: the positive number to print
 * Return: void
 */

void print_positive_binary(long int number)
{
	long int temp = 0;
	long int max = 1;

	if (number == 0)
	{
		_putchar('0');
		return;
	}
	while (max <= number)
	{
		max = max * 2;
	}
	max = max / 2;
	temp = max;

	while (max > 0)
	{
		if (temp <= number)
		{
			_putchar('1');
			number = number - temp;
		}
		else
		{
			_putchar('0');
		}
		max = max / 2;
		temp = temp / 2;
	}
}

/**
 * print_binary - print the binary representation of a number
 * @n: the number to print
 */

void print_binary(long int n)
{
	if (n < 0)
	{
		n = -n;
		n = bit32_range - n;
	}
	print_positive_binary(n);
}
