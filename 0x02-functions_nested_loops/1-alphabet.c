#include "main.h"

/**
 * print_alphabet - uses  _putchar to print characters.
 * Return: chars in lowercase
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
