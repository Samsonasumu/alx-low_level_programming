#include "hash_tables.h"
/**
 * key_index - get the index from a key
 * @key: string used to generate value
 * @size: size of the hash table
 * Return: Return the index of a key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
