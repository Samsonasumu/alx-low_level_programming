#include "holberton.h"
/**
 * _strspn - gets length of a prefix subtring
 * @s: char type
 * @accept: char type
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, y = 0;
while (s[i] != '\0')
{
while (accept[y] != '\0')
{
if (s[i] == accept[y])
{
break;
}
y++;
}
if (s[i] != accept[y])
break;
y = 0;
i++;
}
return (i);
}
