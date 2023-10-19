#include "lists.h"

/**
 * print_list - function
 * @h: input
 * Return: int.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (count);
}
