#include "main.h"

/**
 * _realloc - function
 * @ptr: pointer
 * @old_size:input
 * @new_size:input
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	int *p;
	int *copy;
	int i;

	i = 0;
	copy = (int *) ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	while (i < old_size)
	{
		p[i] = copy[i];
		i++;
	}
	free(copy);
	return (p);
}
