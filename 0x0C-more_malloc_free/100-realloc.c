#include "main.h"

/**
 * _realloc - function
 * @ptr: pointer
 * @old_size:input
 * @new_size:input
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

        char *p;
        char *copy;
        unsigned int i;
        unsigned int max;

        i = 0;
        max = new_size;
        copy = (char *) ptr;

        if (ptr == NULL)
        {
                p = malloc(new_size);
                return (p);
        }
        if (new_size == old_size)
                return (ptr);
        if (new_size == 0 && ptr != NULL)
        {
                free(ptr);
                return (NULL);
        }
        p = malloc(new_size);
        if (p == NULL)
                return (NULL);
        if (new_size > old_size)
                max = old_size;
        while (i < max)
        {
                p[i] = copy[i];
                i++;
        }
        free(copy);
        return (p);
}
