#include "main.h"
/**
 * _islower - check for lower case character
 * Return: always 0
 * @c: the character to be transformed
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
