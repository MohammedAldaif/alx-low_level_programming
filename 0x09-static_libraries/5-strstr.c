#include "main.h"

/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return: pointer.
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *n = needle;
		char *s = haystack;

		while (*s == *n && *n != '\0')
			s++, n++;
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
