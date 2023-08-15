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
	_putchar('0' + a % 10);
	return (a % 10);
}
