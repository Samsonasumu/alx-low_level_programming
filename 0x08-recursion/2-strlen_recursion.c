#include "main.h"
/**
 * _strlen_recursion - prints lenght of string
 * @s: pointer to string params
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
