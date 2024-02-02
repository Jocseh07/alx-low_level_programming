#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table to look into
 * @key: the value you are looking for
 * Return: value associated with element or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	while (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
		ht->array[index] = ht->array[index]->next;
	return (NULL);
}
