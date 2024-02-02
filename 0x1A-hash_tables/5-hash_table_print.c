#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0, size;
	hash_node_t *node;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	for (a = 0; a < size; a++)
	{
		node = ht->array[a];
		if (node != NULL)
			printf(", ");
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
