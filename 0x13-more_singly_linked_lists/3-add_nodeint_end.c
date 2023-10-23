#include "lists.h"

/**
 * add_nodeint_end - adds a new node
 * to the start of a list
 * @head: pointer to pointer to the list
 * @n: input
 * Return: pointer to the newly added node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *traverse = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = new_node;
	}
	return (new_node);
}
