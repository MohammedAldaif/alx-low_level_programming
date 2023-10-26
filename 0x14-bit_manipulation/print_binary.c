#include "main.h"

#define bit32_range (4294967296)

void print_binary(long int number, int *count);

/**
 * print_positive_binary - print the binary representation of a positive number
 * @number: the positive number to print
 * @count: a pointer to the count of printed characters
 * Return: void
 */

void print_positive_binary(long int number, int *count)
{
	long int temp = 0;
	long int max = 1;

	if (number == 0)
	{
		_putchar('0');
		(*count)++;
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
			(*count)++;
		}
		else
		{
			_putchar('0');
			(*count)++;
		}
		max = max / 2;
		temp = temp / 2;
	}
}

/**
 * print_binary - print the binary representation of a number
 * @number: the number to print
 * @count: a pointer to the count of printed characters
 */

void print_binary(long int number, int *count)
{
	if (number < 0)
	{
		number = -number;
		number = bit32_range - number;
	}
	print_positive_binary(number, count);
}
