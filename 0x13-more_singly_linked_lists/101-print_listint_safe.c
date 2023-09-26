#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers with safety checks.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);  /* Exit the program with code 98 */
		}

		current = current->next;
	}

	return (count);
}
