#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string, excluding the null terminator.
 */

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to be appended.
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	concat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (concat == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + j) != '\0')
	{
		*(concat + i) = *(s2 + j);
		j++;
		i++;
	}
	*(concat + i) = '\0';

	return (concat);
}

