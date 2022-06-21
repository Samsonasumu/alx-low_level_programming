#include "main.h"

int confirm_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - confirms whether a number is palindrome
 * @s: string to reverse
 * Return: 1 if true,0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (confirm_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
int confirm_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (confirm_pal(s, i + 1, len - 1));
}
