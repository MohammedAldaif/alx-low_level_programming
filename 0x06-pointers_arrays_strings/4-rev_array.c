#include "main.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: input
 * @n: input
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = a[0];
	int m = n - 1;

	while (1)
	{
		tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
		i++;
		m--;
		if (m == n / 2)
			break;
	}
	if (n % 2 == 0)
	{
		tmp = a[n / 2];
		a[n / 2] = a[n / 2 - 1];
		a[n / 2 - 1] = tmp;
	}
}
