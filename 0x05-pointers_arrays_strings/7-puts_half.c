#include "main.h"

/**
 * puts_half - function
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (*str == '\0')
	{
		for (i = 0; i < count / 2 ; i++)
		{
			str--;
		}
		for (i = 0 ; i < count / 2; i++)
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
