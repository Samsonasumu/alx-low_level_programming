#include "main.h"
/**
 * _sqrt_recursion - start of excetion
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - the recurssive fxn
 * @n: parameter
 * @i: parameter
 * Return: squareroot
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (1);
	}
	return (_sqrt(n, i + 1));
}
