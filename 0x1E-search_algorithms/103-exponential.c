#include<stdio.h>
#include<math.h>
#include "search_algos.h"

/**
 * minimum - function
 * @a: var
 * @b: var
 * Return: size_t
 **/


size_t minimum(size_t a, size_t b);

/**
 * exponential_search - function
 * @array: pointer
 * @size: var
 * @value: int
 * Return: int
 **/

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, (int)array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%d] and
		[%d]\n", (int)i / 2, (int) minimum(i, size - 1));
	return (binary_search_recursive(array, value, i / 2, minimum(i, size - 1)));

}

/**
 * binary_search_recursive - function
 * @array: pointer
 * @value: int
 * @left: int
 * @right: int
 * Return: int
 **/


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
 * minimum - function
 * @a: var
 * @b: var
 * Return: size_t
 **/

size_t minimum(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
