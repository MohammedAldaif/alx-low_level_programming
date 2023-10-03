#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string, or -1 if NULL.
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (-1);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 * Return: A pointer to the duplicated string,
 * or NULL if str is NULL or memory allocation fails.
 */

char *_strdup(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	char *copy = malloc(sizeof(char) * (_strlen(str) + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		*(copy + i) = *(str + i);
		i++;
	}

	*(copy + i) = *(str + i);

	return (copy);
}

