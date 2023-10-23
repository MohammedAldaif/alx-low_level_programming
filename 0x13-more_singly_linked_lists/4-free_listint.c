#include "lists.h"

/**
 * free_listint - frees the memory
 * space previously allocated for
 * the linkedlist
 * @head: pointer
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *current;

	temp = head;
	current = temp;

	while (temp->next != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	}
	free(temp);
}
