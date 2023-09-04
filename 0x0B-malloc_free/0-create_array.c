#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: input
 * @c: input
 * Return: pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc((size) * sizeof(char));
	if (s == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
