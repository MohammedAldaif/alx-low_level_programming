#include "main.h"

/**
 * _strchr - function
 * @s: input
 * @c: input
 * Return: pointer.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (c - *(s + i) != 0 && *(s + i) != '\0')
		i++;
	return (*(s + i) == '\0' ? '\0' : s + i);
}
