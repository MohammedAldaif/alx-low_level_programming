#include "main.h"

/**
 * strlength - check the code for Holberton School students.
 * @str: input
 * Return: int.
 */

int strlength(char *str)
{
	/* this function receives a pointer which points to the dest array */
	/* and calculates the length of the array pointed to by the pointer */

	int i = 0;

	while (*(str + i) != '\0')
		i++;
return (i); /* should return 6 */
}

/**
 * _strncat - check the code for Holberton School students.
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer.
 */

char *_strncat(char *dest, char *src, int n)
{

	int dest_len = strlength(dest); /* calculates the length of "Hello " */
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + dest_len + i) = *(src + i);
	}
	*(dest + dest_len + i) = '\0';
	return (dest);
}

