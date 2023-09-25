#include "lists.h"

/**
 * listint_len - Computes the number of elements in a listint_t linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the linked list.
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

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which to insert the new node.
 * @n: The value to assign to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *at_pos;
	listint_t *before_pos = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = before_pos;
		*head = new_node;
		return (*head);
	}

	idx--;

	while (idx > 0)
	{
		if (before_pos != NULL)
			before_pos = before_pos->next;
		idx--;
	}

	if (before_pos == NULL)
	{
		free(new_node);
		return (NULL);
	}

	at_pos = before_pos->next;
	new_node->next = at_pos;
	before_pos->next = new_node;

	return (new_node);
}
