#include "main.h"

/**
 * _strpbrk - function
 * @s: input
 * @accept: input
 * Return: pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				p = s + i;
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
