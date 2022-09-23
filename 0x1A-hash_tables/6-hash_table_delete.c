#include "hash_tables.h"

/**
 * hash_table_delete - frees
 * @ht: hast table where we are going to work
 *
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			tmp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = tmp;
		}

	}
	free(ht->array);
	free(ht);
}
