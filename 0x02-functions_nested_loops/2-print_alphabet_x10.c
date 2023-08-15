#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar function to print vharacters from a to z
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		putchar('\n');
		a = 'a';
		i++;
	}
}
