#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;
	int loop_detected = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %d\n", (void *)slow, slow->n);

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}

		num++;
	}

	if (loop_detected)
	{
		slow = head;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next;
		}
		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}

	return (loop_detected ? num + 1 : num);
}
