#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: input
 * @n: input
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	i = 0;

	while (i < n)
	{
		str = va_arg(list, char *);

		printf("%s", str == NULL ? "(nil)" : str);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(list);
}
