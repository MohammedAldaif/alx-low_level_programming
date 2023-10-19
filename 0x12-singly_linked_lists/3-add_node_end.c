#include "lists.h"

/**
 * add_node_end - function
 * @head: pointer to pointer
 * receives the head pointer
 * that will be passed from
 * the main function
 * @str: input string
 * Return: pointer to list_t struct.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *traverse;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	if (ptr->str == NULL)
		return (NULL);

	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = ptr;
	}
	return (ptr);
}
