#include "main.h"

/**
 * _strpbrk - function
 * @s: input
 * @accept: input
 * Return: pointer.
 */

char *_strpbrk(char *s, char *accept);
{
	while (*(s + j) != '\0')
        {
                while (*(accept + i) != '\0')
                {
                        if (*(s + j) - *(accept + i) == 0)
                                return (s + i);
                        i++;
                }
                if (*(accept + i) == '\0')
                        break;
                i = 0, j++;
        }
	return NULL;
}
