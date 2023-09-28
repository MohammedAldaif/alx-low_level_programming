#include "main.h"

/**
 * find_sqrt - function
 * @n: input
 * @x: input
 * Return: int.
 */
int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: int.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
