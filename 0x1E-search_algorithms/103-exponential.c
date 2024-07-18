#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: The left index of the subarray to print
 * @right: The right index of the subarray to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_searc - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @left: Left index of the subarray to search in
 * @right: Right index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_searc(int *array, size_t left, size_t right, int value)
{
	while (left <= right)
	{
		size_t mid;

		print_array(array, left, right);
		 mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	/* If the value is at the first position */
	if (array[0] == value)
	{
		return (0);
	}

	/* Find the range for binary search by repeated doubling */
	bound = 1;

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	/* Perform binary search in the found range */


	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_searc(array, left, right, value));
}
