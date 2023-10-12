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
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
