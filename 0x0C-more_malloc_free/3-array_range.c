#include "main.h"

/**
* array_range - function
* @min: input
* @max: input
* Return: pointer.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j = 0;
	int length;

	length = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(length * sizeof(int));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			*(ptr + j) = i;
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);

}
