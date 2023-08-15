#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar function to print vharacters from a to z
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
