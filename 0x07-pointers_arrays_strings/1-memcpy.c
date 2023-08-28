#include "main.h"

/**
 * _memcpy - function
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		*(dest + n) = *(src + n);
	return (dest);
}
