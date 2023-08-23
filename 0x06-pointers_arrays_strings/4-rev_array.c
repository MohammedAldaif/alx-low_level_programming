#include "main.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: input
 * @n: input
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int arr[n];

	for (i = 0; i < n ; i++)
	{
		arr[i] = a[i];
	}
	i = 0;

	while (n--)
	{
		a[n] = arr[i];
		i++;
	}
}
