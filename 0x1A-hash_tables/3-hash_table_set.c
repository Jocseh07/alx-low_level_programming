#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to update the key/ value to
 * @key:  key to update
 * @value: value to update
 * Return: 1 if succeeded or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value2;
	unsigned long int a, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value2 = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value2;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value2);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value2;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}