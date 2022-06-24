#include "main.h"
/**
 * _strstr - finds the first occurence
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return: a pointer to the beggining
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
