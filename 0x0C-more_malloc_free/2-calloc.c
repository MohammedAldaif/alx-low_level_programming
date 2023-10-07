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
	unsigned int i;
	char *set_to_zero;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	set_to_zero = (char *) ptr;
	for (i = 0; i < size; i++)
	{
		set_to_zero[i] = 0;
	}
	return (ptr);
}
