#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of passed arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list ptr;

	va_start(ptr, n);

<<<<<<< HEAD
	for (i = 0; i < n; i++)
=======
	while (i < n)
>>>>>>> 01075dfb6a38a4a67f11a09242babc247e06e0fb
	{
		sum += va_arg(ptr, int);
	}
<<<<<<< HEAD
	va_end(ptr);
	return (sum);
=======
	va_end(list);
	return (result);
>>>>>>> 01075dfb6a38a4a67f11a09242babc247e06e0fb
}
