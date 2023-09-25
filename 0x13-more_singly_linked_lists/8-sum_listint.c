#include "lists.h"

/**
 * sum_listint - Computes the sum of all integers in a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all integers in the linked list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
