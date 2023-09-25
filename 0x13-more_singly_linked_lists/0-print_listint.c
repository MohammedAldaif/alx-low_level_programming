#include "lists.h"

/**
 * print_listint - Prints integers from a linked list.
 * @h: A pointer to the linked list.
 * Return: Number of elements printed.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
