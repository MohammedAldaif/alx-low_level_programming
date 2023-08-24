#include "main.h"

/**
 * rot13 - check the code for Holberton School students.
 * @c: input
 * Return: pointer.
 */

char *rot13(char *c)
{
	int i = 0;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = c;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == rot13[i])
			{
				*c = ROT13[i];
				break;
			}
		}
		c++;
	}
	return (ptr);
}
