#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: always
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
