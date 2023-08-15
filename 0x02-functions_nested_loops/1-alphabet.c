#include "main.h"

/**
 * print_alphabet - uses _putchar function to print vharacters from a to z
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
