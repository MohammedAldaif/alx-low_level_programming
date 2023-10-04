#include "main.h"

/**
 * argstostr - Concatenates all program arguments with '\n'.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 * Return: A pointer to a new concatenated string,
 * or NULL if memory allocation fails or no arguments are provided.
 */

char *argstostr(int ac, char **av)
{
	int total_length;
	int i, j;
	char *result;
	int index;

	total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	result = malloc(sizeof(char) * (total_length + 1));

	if (result == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}

