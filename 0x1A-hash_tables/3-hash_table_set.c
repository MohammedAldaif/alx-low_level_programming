#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht: input
 * @key:input
 * @value: input
 * Return: int
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *duplicate_value;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	duplicate_value = strdup(value);

	if (value != NULL && duplicate_value == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = duplicate_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

