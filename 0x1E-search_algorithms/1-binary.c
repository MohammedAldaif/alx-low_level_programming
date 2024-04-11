#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search_recursive - this function searches
 * for the value in the array recursively
 * @array: pointer to the array
 * @value: the value to search for
 * @left: the index of the first element of the array
 * @right: the index of the right element of the array
 * Return: the index of the value or -1 otherwise
 **/

int binary_search_recursive(int *array, int value, size_t left, size_t right);

/**
 * binary_search - this function searches
 * for the value in the array recursively
 * @array: pointer to the array
 * @value: the value to search for
 * @size: the size of the array
 * Return: the index of the value or -1 otherwise
 **/

int binary_search(int *array, size_t size, int value)
{
	if (size == 0)
		return (-1);

	return (binary_search_recursive(array, value, 0, size - 1));
}

/**
 * binary_search_recursive - this function searches
 * for the value in the array recursively
 * @array: pointer to the array
 * @value: the value to search for
 * @left: the index of the first element of the array
 * @right: the index of the right element of the array
 * Return: the index of the value or -1 otherwise
 **/

int binary_search_recursive(int *array, int value, size_t left, size_t right)
{
	if (left <= right)
	{
		size_t medium = left + (right - left) / 2;
		int test = array[left];

		printf("Searching in array ");
		while (test <= array[right])
		{
			if (test == array[right])
				printf("%d\n", test);
			else
				printf("%d, ", test);
			test++;
		}
		if (array[medium] == value)
			return (medium);
		else if (value < array[medium])
		{
			return (binary_search_recursive(array, value, left, medium - 1));
		}
		else
		{
			return (binary_search_recursive(array, value, medium + 1, right));
		}
	}

	return (-1);
}
