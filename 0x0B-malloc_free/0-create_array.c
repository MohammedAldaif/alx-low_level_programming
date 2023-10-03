#include "main.h"

/**
 * create_array - Allocates memory for an array of characters.
 * @size: The size of the array.
 * @c: The character to initialize the array elements.
 * Return: A pointer to the allocated character array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}

