#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: input
 * @n: input
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
