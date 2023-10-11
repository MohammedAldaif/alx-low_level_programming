#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function
 * @array: input
 * @size: input
 * @action: input
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{

			action(array[i]);
		}
	}
}
