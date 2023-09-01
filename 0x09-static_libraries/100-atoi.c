#include "main.h"

/**
 * _atoi - check the code for Holberton School students.
 * @c: input
 * Return: 0.
 */

int _atoi(char *c)
{
	unsigned int n = 0;
	int sign = 1;

	do {
		if (*c == '-')
			sign *= -1;
		else if (*c >= '0' && *c <= '9')
			n = (n * 10) + (*c - '0');
		else if (n > 0)
			break;
	} while (*c++);
	return (n * sign);
}
