include "main.h"

/**
 * naturalSquare - function
 * @num: input
 * @initialValue: input
 * Return: int.
 */

int naturalSquare(int num, int initialValue)
{
	if (initialValue * initialValue == num)
		return (initialValue);
	else if (initialValue * initialValue < num)
		return (naturalSquare(num, initialValue + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: int.
 */

int _sqrt_recursion(int n)
{
	return (naturalSquare(n, 1));
}
