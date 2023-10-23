#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at
 * a specific position
 * @head: input
 * @index: input
 * Return: pointer to the node, or NULL if fails
 */

listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	listint_t *current = *head;
	listint_t *temp;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (unsigned int i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	if (current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
