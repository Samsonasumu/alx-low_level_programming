#include "lists.h"

/**
 * print_list - Function to print all the elements of a struct list
 * @h: the structure
 * Return: structure
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
