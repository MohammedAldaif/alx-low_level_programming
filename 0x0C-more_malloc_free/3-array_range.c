#include "main.h"

/**
 * array_range - function
 * @min: input
 * @max: input
 * Return: pointer to int.
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		*(ptr + i) = min + i;
	return (ptr);
}
