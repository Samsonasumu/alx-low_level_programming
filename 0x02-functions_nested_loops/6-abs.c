#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @k: number as an integer
 * Return: int
 */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
	{
		return (k * -1);
	}
	_putchar('\n');
}
