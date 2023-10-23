#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at
 * a specific position
 * @head: input
 * @idx: input
 * @n: input
 * Return: pointer to the node, or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}

	if (idx > 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
