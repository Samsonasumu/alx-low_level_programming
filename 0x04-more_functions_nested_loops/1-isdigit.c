#include "main.h"
/**
 * _isdigit - checks the code for digit 0 to 9
 * @c: int to be checked
 * Return: 1 if d is a digit ,0 if not
 */
int _isdigit(int c)
{
	if (c > 0 && c <= 9)
		return (1);
	else
		return (0);
}
