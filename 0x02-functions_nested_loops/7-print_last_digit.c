#include "main.h"

/**
 * print_last_digit - function
 *@a: input variable
 * Return: last digit
 */
int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;
		a %= 10;
	_putchar('0' + a);
	return (a % 10);
}
