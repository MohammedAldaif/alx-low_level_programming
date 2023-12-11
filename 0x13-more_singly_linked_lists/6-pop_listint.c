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
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	temp = temp->next;
	data = (*head)->n;
	free(*head);
	*head = temp;

	return (data);
}
