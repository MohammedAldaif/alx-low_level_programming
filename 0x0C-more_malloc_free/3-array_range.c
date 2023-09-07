#include "main.h"

/**
 * array_range - function
 * @min: input
 * @max: input
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int i, length, j = 0;
	int *ptr;

	length = max - min + 1;

	if (min < max)
		return (NULL);
	ptr =  malloc(sizeof(int) * length);
		if (ptr == NULL)
			return (NULL);
		for (i = min; i <= max ; i++)
		{
			*(ptr + j) = i;
			j++;
		}
	return (ptr);
}
