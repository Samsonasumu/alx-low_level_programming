#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: char params to found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
