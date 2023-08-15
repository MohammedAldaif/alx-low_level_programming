#include "main.h"

/**
 * print_to_98 - uses  _putchar to print characters
 *@n: input
 * Return: 1 if lower , 0 otherwise
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
