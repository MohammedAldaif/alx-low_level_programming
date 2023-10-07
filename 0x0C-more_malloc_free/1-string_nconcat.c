#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string, excluding the null terminator.
 */

unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to be appended.
 * @n: the number of characters to be concatenated.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned	int i = 0, j = 0;
	unsigned int len1, len2;
	char *concat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (j < n && j <= _strlen(s2))
	{
		*(concat + i) = *(s2 + j);
		j++;
		i++;
	}
	*(concat + i) = '\0';

	return (concat);
}
