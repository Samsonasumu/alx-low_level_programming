#include "holberton.h"
/**
*_isdigit - Return 1 if c is a digit.
*@c: Value
*Return: 1 if c is a value ,0 otherwise
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
