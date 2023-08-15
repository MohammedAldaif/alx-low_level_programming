#include "main.h"

/**
 * print_last_digit - function
 *@a: input variable
 * Return: last digit
 */
int print_last_digit(int a)
{
	a %= 10;
	if (a < 0 && a != -8)
		a *= -1;
	else if (a < 0 && a == -8)
		a = 8;	
	_putchar(48 + a);
	return (a);
}
