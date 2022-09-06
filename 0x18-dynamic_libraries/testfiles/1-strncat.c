#include "holberton.h"
/**
 *_strncat - Concatenates two strings
 *@dest: pointer
 *@src: pointer
 *@n: bytes
 * Return: return the result.
 */
char *_strncat(char *dest, char *src, int n)
{
int lent = 0, a = 0;
while (dest[lent])
{
lent++;
}

while (a < n && src[a])
{
dest[lent] = src[a];
lent++;
a++;
}

dest[lent + n + 1] = '\0';
return (dest);
}
