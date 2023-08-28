#include "main.h"

/**
 * _strstr - function
 * @haystack: input
 * @needle: input
 * Return: pointer.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int tmp;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(needle + j) == *(haystack + i))
		{
			tmp = i;
		}
	}
	for (i = tmp ; *(haystack + i) != '\0'; i++)
	{
		if (*(needle + j) == *(haystack + i))
		{
			j++;
		}
	}
	if (*(needle + j) == '\0')
	{
		return (haystack + tmp);
	}
	return (0);
}
