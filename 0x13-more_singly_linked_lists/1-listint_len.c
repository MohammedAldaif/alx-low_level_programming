#include "lists.h"

/**
 * listint_len - Counts elements in a linked list.
 * @h: A pointer to the linked list.
 *
 * Return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
