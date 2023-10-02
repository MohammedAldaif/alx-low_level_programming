#include "main.h"

/**
 * _strspn - function
 * @s: input
 * @accept: input
 * Return: pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + j) != '\0')
	{
		while (*(accept + i) != '\0')
		{
			if (*(s + j) - *(accept + i) == 0)
				break;
			i++;
		}
		if (*(accept + i) == '\0')
			break;
		i = 0, j++;
	}
	return (j);
}
