#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
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
 * delete_nodeint_at_index - Deletes the node
 *  at a given index in a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (index starts at 0).
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse = *head;
	listint_t *temp;

	if (traverse == NULL)
		return (-1);

	if (index >= listint_len(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(traverse); /* Free the deleted node */
		return (1);
	}

	while (index > 1)
	{
		if (traverse->next != NULL)
			traverse = traverse->next;
		index--;
	}

	temp  = traverse->next;

	traverse->next = temp->next;
	free(temp); /* Free the deleted node */
	return (1);
}
