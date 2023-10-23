#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a ndoe at
 * a certain position
 * @head: input
 * @idx: input
 * @n: input
 * Return: pointer to the node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	unsigned int i;
	listint_t *traverse = *head;
	listint_t *new_node = NULL;
	listint_t *temp = NULL;

	if (traverse ==  NULL)
		return (NULL);

	while (traverse != NULL)
	{
		nodes++;
		traverse = traverse->next;
	}

	if (idx > nodes)
		return (NULL);
	traverse = *head;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		traverse = traverse->next;
	}
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	temp = traverse->next;
	traverse->next = new_node;
	new_node->next = temp;

	return (new_node);
}
