#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the nth node, or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
