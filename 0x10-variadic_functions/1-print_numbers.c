#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: input
 * @n: input
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL  && i < n - 1)
		{
			printf("%d%s", va_arg(list, int), *separator);
		}
		else
			printf("%d", va_arg(list, int));
	}
	printf("\n");
}
