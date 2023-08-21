#include "main.h"

/**
 * swap_int - function
 * @a: pointer
 * @b: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b, *b = tmp;
}
