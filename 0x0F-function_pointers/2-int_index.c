#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: input
 * @size: input
 * @cmp: pointer
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size && size > 0; i++)
		{
			if (((*cmp)(array[i])) != 0)
				return (i);
		}
	}
	return (-1);
}
