#include "main.h"

/**
 * string_nconcat - function
 * @s1: input
 * @s2: input
 * @n:  input
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length;
	unsigned int i;
	char *ptr;

	length = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
			for (i = 0; s1[i]; i++)
				length++;
	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	length = 0;

	for (i = 0; s1[i]; i++)
		ptr[length++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		ptr[length++] = s2[i];
	ptr[length] = '\0';
	return (ptr);
}
