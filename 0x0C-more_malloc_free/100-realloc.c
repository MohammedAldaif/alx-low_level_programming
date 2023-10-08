#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *copy;
	unsigned int i;
	unsigned int max;

	i = 0;
	max = new_size;
	copy = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	while (i < max)
	{
		p[i] = copy[i];
		i++;
	}
	free(ptr);
	return (p);
}
