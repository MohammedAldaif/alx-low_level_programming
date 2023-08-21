#include "main.h"
#include <stdio.h>

/**
 * rev_string - function
 * @s: pointer
 * Return: int
 */

void rev_string(char *s)
{
	int i = 0;
	int n, j = 0;
	int arr[100];

	while (*s != '\0')
		i++, s++;
	n = i;
	for (i = n; i >= 0; i--)
	{
		s--;
		j++;
		arr[j] = *s;
	}
	for (i = 0; i <= n; i++)
	{
		s[i] = arr[i];
	}
	putchar('\n');
}
