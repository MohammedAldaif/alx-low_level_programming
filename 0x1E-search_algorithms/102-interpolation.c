#include <stdio.h>

/**
 * interpolation_search - function
 * @array: pointer
 * @size: int
 * @value: int
 * Return: int
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", (int)pos, (int)array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
