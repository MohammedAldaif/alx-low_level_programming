#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: input
 * @src: input
 * Return: pointer.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = *(src + j);
	return (dest);
}
