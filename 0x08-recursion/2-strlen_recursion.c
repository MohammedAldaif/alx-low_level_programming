#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: char
 * Return: void.
 */

int _strlen_recursion(char *s)
{
	static int i = 1;

	if (*s > '\0')
	{
		i++, s++;
		_strlen_recursion(s);
	}
	return (i - 1);
}
