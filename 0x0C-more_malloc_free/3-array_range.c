#include "main.h"

/**
 * array_range - function
 * @min: input
 * @max: input
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int i, length = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		length++;
	}
	ptr =  malloc(i * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
