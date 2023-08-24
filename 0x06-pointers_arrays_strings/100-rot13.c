#include "main.h"

/**
 * rot13 - check the code for Holberton School students.
 * @c: input
 * Return: pointer.
 */

char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if ((*(c + i) >= 65 && *(c + i) <= 77)
			|| (*(c + i) >= 97 && *(c + i) <= 109))
		{
			c[i] = c[i] + 13;
		}
		else if ((*(c + i) >= 78 && *(c + i) <= 90)
			|| (*(c + i) >= 110 && *(c + i) <= 122))
		{
			c[i] = c[i] - 13;
		}
		i++;
	}
	return (c);
}
