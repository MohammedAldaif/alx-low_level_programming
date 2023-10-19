#include "lists.h"

/**
 * _strlen - counts string length
 * @str: input
 * Return: num of characters in a string
 */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/**
 * add_node - function
 * @head: pointer to pointer
 * receives the head pointer
 * that will be passed from
 * the main function
 * @str: input string
 * Return: pointer to list_t struct.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
