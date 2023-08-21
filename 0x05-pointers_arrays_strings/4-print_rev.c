#include "main.h"

/**
 * print_rev - function
 * @s: pointer
 * Return: int
 */

void print_rev(char *s)
{
	int i = 0;

	while (1)
	{
		if (*s == '\0')
		{
			while (i >= 0)
			{
				_putchar(*s);
				s--;
				i--;
			}
			break;
		}
		s++;
		i++;
	}

	_putchar('\n');
}
