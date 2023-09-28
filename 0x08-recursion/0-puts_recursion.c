#include "main.h"

/**
 * _puts_recursion - function
 * @s: input
 * Return: void.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);
	else if (*s == '\0')
		_putchar('\n');
}
