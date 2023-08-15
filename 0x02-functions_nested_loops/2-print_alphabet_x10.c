#include "main.h"

/**
 * print_alphabet - uses  _putchar to print characters.
 * Return: chars in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 0;

	while (j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		i = 'a';
		j++;
		_putchar('\n');
	}
}
