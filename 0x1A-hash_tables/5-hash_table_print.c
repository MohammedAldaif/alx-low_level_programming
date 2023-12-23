#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: input
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned int printed;
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	printed = 0;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			printed++;
			node = node->next;
		}
	}
	printf("}\n");
}

