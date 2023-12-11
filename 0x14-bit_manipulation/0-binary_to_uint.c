#include "main.h"

/**
 * binary_to_uint - converts
 * a binary number to unsigned int
 * @b: input
 * Return: unsigned int or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int j;
	unsigned int len;
	unsigned int result;

	i = 0;
	j = 1;
	len = 0;
	result = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}

	len = i - 1;

	i = 0;

	while (b[i] != '\0')
	{
		if (b[len] == '1')
			result += j;
		i++;
		j *= 2;
		len--;
	}

	return (result);
}
