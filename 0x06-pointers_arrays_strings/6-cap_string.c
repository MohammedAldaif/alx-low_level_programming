#include "main.h"


/**
 * char_toupper - check the code for Holberton School students.
 * @c: input
 * Return: pointer.
 */

char *char_toupper(char *c)
{
	if (*(c) >= 97 && *(c) <= 122)
		*(c) =  *(c) - 32;
	return (c);
}

/**
 * cap_string - check the code for Holberton School students.
 * @c: input
 * Return: pointer.
 */

char *cap_string(char *c)
{
	int i = 0;

	char_toupper(c);
	while (*(c + i) != '\0')
	{
		if (*(c + i) == 32 || *(c + i) == 9 || *(c + i) == 10
				|| *(c + i) == 44 || *(c + i) == 59 || *(c + i) == 46 ||
				*(c + i) == 33 || *(c + i) == 63 || *(c + i) == 34 || *(c + i) == 40
				|| *(c + i) == 41 || *(c + i) == 123 || *(c + i) == 125)
		{
			i++;
			char_toupper(c + i);
		}
		i++;
	}
	return (c);
}
