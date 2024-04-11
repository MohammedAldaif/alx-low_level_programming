#include<stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolaton_search_recursive - function
 * @array: var
 * @size: var
 * @value: var
 * @low: var
 * @high: var
 * Return:int
 **/
int interpolation_search_recursive(int *array, size_t low,
		size_t high, size_t size, int value);
/**
 * interpolation_search - function
 * @array: var
 * @size: var
 * @value: var
 * Return:int
 **/
int interpolation_search(int *array, size_t size, int value)
{
	return (interpolation_search_recursive(array, 0, size - 1, size, value));
}

/**
 * interpolaton_search_recursive - function
 * @array: var
 * @size: var
 * @low: var
 * @high: var
 * @value: var
 * Return:int
 **/

int interpolation_search_recursive(int *array, size_t low,
		size_t high, size_t size, int value)
{
	size_t pos;

	if (!array)
		return (-1);
	pos = low + (((double)(high - low) / (array[high]
					- array[low])) * (value - array[low]));
	if (array[pos] == value)
		printf("value index = %d\n", (int)pos);
	else if (value > array[pos])
	{
		low = array[pos] + 1;
		return (interpolation_search_recursive(array, low, size - 1, size, value));
	}
	else if (value < array[pos])
		printf("value < pos\n");
	return (0);
}
