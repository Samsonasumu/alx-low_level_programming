#include "holberton.h"

/**
  * _islower - Return 0 or 1
  *@c: caracter to be checker
  * Return: void
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
