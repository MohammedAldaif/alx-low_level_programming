#include "main.h"

void print_binary(unsigned long int number);

/**
 * print_positive_binary - print the binary representation of a positive number
 * @number: the positive number to print
 * Return: void
 */

void print_positive_binary(unsigned long int number)
{
	unsigned long int temp = 0;
	unsigned long int max = 1;

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
 * @number: the number to print
 */

void print_binary(unsigned long int n)
{
	print_positive_binary(n);
}
