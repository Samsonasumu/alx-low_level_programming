#include "main.h"
/**
 * _isdigit - checks the code for digit 0 to 9
 * @d: int to be checked
 * Return: 1if d is a digit ,0 if not
 */
int _isdigit(int d)
{
	if (d > 0 && d <= 9)
		return (1);
	else
		return (0);
}
