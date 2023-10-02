#include "main.h"

/**
 * _puts - function
 * @str: pointer
 * Return: int
 */

void _puts(char *str)
{
	int i = 1;

	while (i != 0)
		*str == '\0' ? _putchar('\n'), i = 0 : _putchar(*str), str++;
}
