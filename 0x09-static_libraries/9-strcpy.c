#include <stdio.h>

void print_rev(char *);

/**
 * _strcpy - check the code for Holberton School students.
 *@dest: input
 *@src: input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	while (x < l)
	{
		dest[x] = src[x];
		x++;
	}
	dest[l] = '\0';
	return (dest);
}
