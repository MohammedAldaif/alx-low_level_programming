#include <stdlib.h>
#include <stdio.h>

/**
* **strtow - function
* @str : input
* Return: pointer
*/

char **strtow(char *str)
{
	char **ptr;
	int i;
	int j = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
			size++;
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
		{
			*ptr[j] = str[i];
			j++;
		}
		else
		{
		}
	}
	return (ptr);
}
