#include "lists.h"

/**
 * reverse_listint - Reverses a
 * listint_t linked list.
 * @head: pointer to a pointer to
 * the head of the list.
 * Return: pointer to the first
 * node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (*head);
}
