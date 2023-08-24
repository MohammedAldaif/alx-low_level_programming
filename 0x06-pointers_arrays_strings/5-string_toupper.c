#include "main.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @c: input
 * Return: pointer.
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
			*(c + i) =  *(c + i) - 32;
		i++;
	}
	return (c);
}
