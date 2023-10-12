#include "variadic_functions.h"


/**
 * sum_them_all - function
 * @n: input
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list list;

	va_start(list, n);
	i = 0;
	result = 0;

	if (n == 0)
		return (0);
	while (i < n)
	{
		result += va_arg(list, int);
		i++;
	}
	return (result);
}
