#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog struct
 * @d: pointer to struct to free
 *
 * Return: 0 if always successful
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
