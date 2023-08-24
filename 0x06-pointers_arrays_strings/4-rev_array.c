#include "main.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: input
 * @n: input
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
