#include "holberton.h"

/**
  * _isalpha - Return 0 or 1
  *@c: caracter to be checker
  * Return: void
  */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
