#include "main.h"

/**
 * _memset - function
 * @s: input
 * @b: input
 * @n: input
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
