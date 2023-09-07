#include "main.h"

/**
 * _strlen - function
 * @str: input
 * Return: pointer.
 */

unsigned int _strlen(char *str);

/**
 * string_nconcat - function
 * @s1: input
 * @s2: input
 * @n:  input
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_of_s1 = _strlen(s1);
	unsigned int length_of_s2 = n;
	unsigned int length_of_concatenated_string;
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr;

	if (n >= _strlen(s2))
		length_of_s2 = _strlen(s2);

	length_of_concatenated_string = length_of_s1 + length_of_s2;

	ptr = malloc((length_of_concatenated_string + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	/*if (_strlen(s1) == 0 && _strlen(s2) == 0) */
		/* exit(1); */
	for (i = 0; i < length_of_s1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	length_of_s2--;
	while (j <= length_of_s2)
	{
		*(ptr + i) = *(s2 + j);
		i++;
		j++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}

/**
 * _strlen - function
 * @str: input
 * Return: pointer.
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		str = "";
	while (*(str + i) != '\0')
		i++;
	return (i);
}
