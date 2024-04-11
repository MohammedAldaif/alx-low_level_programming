#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted array using
 *                           binary search algorithm recursively.
 * @array: Pointer to the first element of the array
 * @value: The value to search for
 * @left: The index of the left boundary of the array
 * @right: The index of the right boundary of the array
 *
 * Return: The index of the value if found, otherwise -1
 */
int binary_search_recursive(int *array, int value, size_t left, size_t right)
{
	if (left <= right)
	{
		size_t i;
		size_t mid;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			return (binary_search_recursive(array, value, left, mid - 1));
		else
			return (binary_search_recursive(array, value, mid + 1, right));
	}

	return (-1);
}

/**
 * binary_search - Searches for a value in a sorted array using
 *                 binary search algorithm.
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, value, 0, size - 1));
}
