#include "main.h"

/**
 * _calloc - function
 * @nmemb: input
 * @size: input
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
