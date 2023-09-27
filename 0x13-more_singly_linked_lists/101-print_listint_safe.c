#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function
 * @head: pointer
 * Return: int.
 */

size_t count_unique_nodes(const listint_t *head)
{
	const listint_t *traverse_by_one_step, *traverse_by_two_steps;
	size_t num_of_elements = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	traverse_by_one_step = head->next;
	traverse_by_two_steps = (head->next)->next;

	while (traverse_by_two_steps)
	{
		if (traverse_by_one_step == traverse_by_two_steps)
		{
			traverse_by_one_step = head;
			while (traverse_by_one_step != traverse_by_two_steps)
			{
				num_of_elements++;
				traverse_by_one_step = traverse_by_one_step->next;
				traverse_by_two_steps = traverse_by_two_steps->next;
			}

			traverse_by_one_step = traverse_by_one_step->next;
			while (traverse_by_one_step != traverse_by_two_steps)
			{
				num_of_elements++;
				traverse_by_one_step = traverse_by_one_step->next;
			}

			return (num_of_elements);
		}

		traverse_by_one_step = traverse_by_one_step->next;
		traverse_by_two_steps = (traverse_by_two_steps->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function
 * @head: pointer
 * Return: int.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_elements, i = 0;

	num_of_elements = count_unique_nodes(head);

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
