#include "holberton.h"
/**
 *_strncpy - copy a string.
 *@dest: pointer
 *@src: pointer
 *@n: bytes
 * Return: return the result.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[b])
{
b++;
}

while (a < n && src[a])
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);
}
