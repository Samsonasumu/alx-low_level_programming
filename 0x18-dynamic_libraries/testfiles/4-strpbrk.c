#include "holberton.h"
/**
 * _strpbrk - main
 * @s: value
 * @accept: value
 * Return: entry
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, x = 0;

while (s[i] != '\0')
{
while (accept[x] != '\0')
{
if (s[i] == accept[x])
return (s + i);
x++;
}
x = 0;

i++;
}
return ('\0');
}
