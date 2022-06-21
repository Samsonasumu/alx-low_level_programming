#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to the powe
 * @x: interger param
 * @y: integer param
 * Return: recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
