#include "lists.h"

/**
 * free_list - frees a memory space
 * previously allocated for linkedlist
 * @head: pointer to the head
 * of the list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp->next != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
