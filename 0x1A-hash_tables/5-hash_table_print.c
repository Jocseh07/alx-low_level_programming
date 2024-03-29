#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0, size, start = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	size = ht->size;
	printf("{");
	for (a = 0; a < size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			if (start == 1)
				printf(", ");
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			start = 1;
		}
	}
	printf("}\n");
}
