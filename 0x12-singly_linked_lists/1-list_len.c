#include "lists.h"

/**
 * list_len - Fuction to return the number of elements in
 * linked list
 * @h: structure
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
