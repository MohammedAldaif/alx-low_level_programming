#include "main.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: input
 * @s2: input
 * Return: pointer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s2 + i) != '\0' && *(s1 + i) != '\0')
	{
		if (*(s1 + i) - *(s2 + i) != 0)
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}
