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
<<<<<<< HEAD
=======

>>>>>>> 70c537c8795801873fbbf6b432e646c293865915
	char *p;
	char *copy;
	unsigned int i;
	unsigned int max;

	i = 0;
	max = new_size;
<<<<<<< HEAD
	copy = ptr;
=======
	copy = (char *) ptr;
>>>>>>> 70c537c8795801873fbbf6b432e646c293865915

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
<<<<<<< HEAD
	else if (new_size == 0)
=======
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
>>>>>>> 70c537c8795801873fbbf6b432e646c293865915
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
