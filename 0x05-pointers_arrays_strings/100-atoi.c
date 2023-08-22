#include "main.h"

void print_rev(char *);

/**
 * _atoi - check the code for Holberton School students.
 *@s: input
 * Return: Always 0.
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - 0);
		else if (num > 0)
			break;
		} while (*s++);
	return (num * sign);
}
