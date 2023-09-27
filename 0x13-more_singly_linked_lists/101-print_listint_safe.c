#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function
 * @head: pointer
 * Return: int.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t num_of_elements = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	for (; hare; num_of_elements++)
	{
		if (tortoise == hare)
			break;

		tortoise = tortoise->next;
		hare = hare->next;
	}

	tortoise = tortoise->next;
	for (; tortoise != hare; num_of_elements++)
	{
		tortoise = tortoise->next;
	}

	return (num_of_elements);
}

/**
 * print_listint_safe - function
 * @head: pointer
 * Return: int.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_elements, i = 0;

	num_of_elements = looped_listint_len(head);

	if (num_of_elements == 0)
	{
		for (; head != NULL; num_of_elements++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < num_of_elements; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_of_elements);
}
