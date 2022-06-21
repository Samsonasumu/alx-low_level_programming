#include "main.h"
/**
 * _memset - it fills the bytes of memory area
 * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return: new value of the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
