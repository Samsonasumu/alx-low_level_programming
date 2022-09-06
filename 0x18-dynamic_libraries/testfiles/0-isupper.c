#include "holberton.h"
/**
* _isupper - Return 1 if c is uppercase.
*@c: value to return
*Return: 0 or 1 .
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
