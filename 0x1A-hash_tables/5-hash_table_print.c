#include "hash_tables.h"

/**
 * hash_table_print - prints elements from hash table
 * @ht: hast table where we are going to work
 *
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
