#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hast table where we are going to work
 * @key: key to use in order to find index , therefore value
 *
 * Return: value associated with key or null if key could'nt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
		ht->size == 0 || ht->array == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
