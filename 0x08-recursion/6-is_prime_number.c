#include "main.h"

/**
 * test - function
 * @n: input
 * @base: input
 * Return: int.
 */

int test(int n, int base)
{
	if (base >= n && n > 1)
		return (1);
	else if (n % base == 0 || n <= 1)
		return (0);
	else
		return (test(n, base + 1));
}

/**
 * is_prime_number - function
 * @n: input
 * Return: int.
 */

int is_prime_number(int n)
{
	return (test(n, 2));
}
