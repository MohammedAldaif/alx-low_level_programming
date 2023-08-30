#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: char
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		if (*s == '\0')
		{	_putchar('\n');
			return;
		}
		_puts_recursion(s);
	}
}
