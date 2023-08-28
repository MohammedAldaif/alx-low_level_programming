#include "main.h"

/**
 * _strchr - function
 * @s: input
 * @c: input
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
	while (c - *s != 0 && *s != '\0')
		s++;
	return (*s == '\0' ? NULL : s);
}
