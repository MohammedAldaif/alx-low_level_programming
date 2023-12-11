#include "lists.h"

/**
 * sum_listint - calculates the
 * sum of all nodes data
 * @head: input
 * Return: sum or 0 if list was empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *traverse = head;

	if (!head)
		return (0);

	while (traverse != NULL)
	{
		sum += traverse->n;
		traverse = traverse->next;
	}

	return (sum);
}
