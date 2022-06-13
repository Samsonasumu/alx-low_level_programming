#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
