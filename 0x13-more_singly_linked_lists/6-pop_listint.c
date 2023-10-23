#include "lists.h"

/**
 * pop_listint - deletes the head node
 * of a linked list
 * @head: input
 * Return: the deleted node's data
 * or 0 if list was empty
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (data);
	data = (*head)->n;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		return (data);
	}
	temp = (*head)->next;
	*head = NULL;
	*head = temp;
	return (data);
}
