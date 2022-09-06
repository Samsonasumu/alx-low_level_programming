#include "holberton.h"
/**
 * _strstr - main
 * @haystack: value
 * @needle: value
 * Return: entry
 */
char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}
b++;
}
if (needle[b] == '\0')
{
return (haystack + a);
}
a++;
}
return ('\0');

}
