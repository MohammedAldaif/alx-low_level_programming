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
	unsigned int i, j;
	char *ptr;

	length = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* count the length of string s1 */
	for (i = 0; *(s1 + i) != '\0'; i++)
		length++;

	/* added 1 to length for the \0 character at the end */
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	/* add string s1 to the new string */
	j = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		ptr[j] = *(s1 + i);
		j++;
	}
	/* add string s2 to the new string */
	for (i = 0; *(s2 + i) != '\0' && i < n; i++)
	{
		ptr[j] = *(s2 + i);
		j++;
	}
	/* add \0 to the end of the new string */
	ptr[j] = '\0';
	return (ptr);
}
