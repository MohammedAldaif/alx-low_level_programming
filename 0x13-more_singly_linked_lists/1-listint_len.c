#include "lists.h"

/**
 * listint_len - counts the number
 * of elements in a list
 * @h: pointer to the head
 * of the list
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
