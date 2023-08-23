#include "main.h"

/**
 * strlength - check the code for Holberton School students.
 * @str: input
 * Return: int.
 */

int strlength(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	if (src[i] == '\0')
		dest[i] = src[i];
	return (dest);
}
