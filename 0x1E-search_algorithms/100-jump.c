#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t current;
	size_t i;

	if (!array || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;
	current = step;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (current < size && array[current] < value)
	{
		prev = current;
		current += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

	for (i = prev; i <= (current < size - 1 ? current : size - 1); ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
