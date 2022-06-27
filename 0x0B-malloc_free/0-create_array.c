#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storage char
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == NULL)
		return (NULL);

	for (; i < size; i++)
		p[i] = c;
	return (p);
}
