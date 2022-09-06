#include "holberton.h"
/**
 *  _strlen - Pritns lenght
 * description: _strlen
 *@s: pointer to s
 * Return: a
 */
int _strlen(char *s)
{
int a;
a = 0;

while (s[a] != 0)
{

a++;
}

return (a);
}
