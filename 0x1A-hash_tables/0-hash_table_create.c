#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int a;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		new->array[a] = NULL;

	return (new);
}