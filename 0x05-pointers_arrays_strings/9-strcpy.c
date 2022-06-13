#include "main.h"
/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: is the destination
 * @src: the source
 * Return: character with the copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
