#include "hash_tables.h"
/**
 * shash_table_create - creates a new hash table
 * @size: size of the array
 * Return: Returns a pointer to a new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	unsigned long int index = 0;

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	/* another assigment: size * sizeof (hash_node_t *) * size*/
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		ht->array[index] = NULL;
	}
	return (ht);
}
/**
 * shash_table_set - creates a new hash node
 * @ht: hash table
 * @key: string used to generate value
 * @value: size of the hash table
 *
 * Return: 1 on succes , 0 on failuer
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn, *tmp;
	char *new_val;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_val;
			return (1);
		}
		tmp = tmp->next;
	}

	hn = shash_node_maker(key, value);
	if (hn == NULL)
		return (0);
	hn->next = ht->array[index];
	ht->array[index] = hn;
	add_sorted_list(ht, hn);
	return (1);
}
/**
 * shash_node_maker - creates a new hash node
 * @key: string used to generate value
 * @value: size of the hash table
 *
 * Return: newnode or null if fails
 */
shash_node_t *shash_node_maker(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	return (new_node);
}
/**
 * add_sorted_list - add a node to the sorted(assci value)
 * @ht: the sorted hash table
 * @hn: the node to add
 *
 * Return: void
 */
void add_sorted_list(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = hn;
		ht->stail = hn;
		return;
	}
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(hn->key, tmp->key) < 0)
		{
			hn->snext = tmp;
			hn->sprev = tmp->sprev;
			tmp->sprev = hn;
			if (hn->sprev != NULL)
				hn->sprev->snext = hn;
			else
				ht->shead = hn;
			return;
		}
		tmp = tmp->snext;
	}

	hn->sprev = ht->stail;
	ht->stail->snext = hn;
	ht->stail = hn;
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hast table where we are going to work
 * @key: key to use in order to find index , therefore value
 *
 * Return: value associated with key or null if key could'nt be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
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
/**
 * shash_table_print - prints elements from hash table
 * @ht: hast table where we are going to work
 *
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->shead;

	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints rev elements from hash table
 * @ht: hast table where we are going to work
 *
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tmp = ht->stail;

	while (tmp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - frees
 * @ht: hast table where we are going to work
 *
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
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
