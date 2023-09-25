#include "lists.h"

/**
 * pop_listint - Removes the head node and returns its data (n).
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: Data (n) of the deleted node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int i;

	listint_t *delete_node = *head;

	if (*head == NULL)
		return (0);

	delete_node = delete_node->next;
	i = (*head)->n;

	free(*head);
	*head = delete_node;

	return (i);
}
