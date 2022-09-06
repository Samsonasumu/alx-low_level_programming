#include "holberton.h"
/**
 * _memset - Entry point
 * Desc: _memset
 * @s: char type
 * @b: char type
 * @n: int type
 * Return: char type
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;

}
return (s);
}
