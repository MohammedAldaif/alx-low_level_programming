#include "main.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: input
 * @n: input
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	n--;
	int i = 0, tmp, m = n / 2;

	n % 2 != 0 ? m++ : 0;
	while (m > 0)
		tmp = a[i], a[i] = a[n], a[n] = tmp, n--, i++, m--;
}
