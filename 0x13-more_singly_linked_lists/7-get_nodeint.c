#include "lists.h"

/**
 * get_nodeint_at_index - returns a pointer
 * to the node at the nth position
 * @head: input
 * @index:input
 * Return: a pointer to the node, null if the node doesnt exists.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node = head;

	if (new_node == NULL)
		return (NULL);
	if (index == 0)
		return (new_node);

	while (index--)
	{
		if (new_node->next == NULL)
			return (NULL);
		new_node = new_node->next;
	}
	return (new_node);
}
