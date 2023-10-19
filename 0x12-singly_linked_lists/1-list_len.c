#include "lists.h"

/**
 * list_len - function
 * @h: input
 * Return: int.
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
