#include<stdio.h>
#include "search_algos.h"

/**
 * linear_search - this fucntion searches for a value
 * in an array using linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: -1 if the value is not present in the array or if the array is NULL,
 *         Otherwise returns the index of the value
 **/

int linear_search(int *array, size_t size, int value)
{
	/* If value is not present in array or if array is NULL, return -1 */
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
	}
	return (-1);
}
