#include "main.h"

/**
 * puts2 - function
 * @str: pointer
 * Return: int
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
