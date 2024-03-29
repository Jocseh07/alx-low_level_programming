#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the key to get the index
 * @size: size of the array of the hash table
 * Return: index of the key/value pare should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
