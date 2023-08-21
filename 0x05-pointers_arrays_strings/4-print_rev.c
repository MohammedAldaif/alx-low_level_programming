#include "main.h"

/**
 * print_rev - function
 * @s: pointer
 * Return: int
 */

void print_rev(char *s)
{
	int i = 0;
	int n;

	while (*s != '\0')
		i++, s++;
	n = i;
	for (i = n; i > 0; i--)
	{
		s--;
		_putchar(*(s));
	}
	_putchar('\n');
}
