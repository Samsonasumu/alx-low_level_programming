#include "holberton.h"
/**
 * _strchr - Entry point
 * @s: char type
 * @c: char type
 * Return: char type
 */
char *_strchr(char *s, char c)
{
int index = 0;

while (index != '0')
{
if (s[index] == c)
{
return (s + index);
}
index++;
}
return ('\0');
}
