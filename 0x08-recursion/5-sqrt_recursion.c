#include "main.h"
/**
 * my_sqrt - finds the squareroot
 * @n: the integer
 * @i: iterator
 * Return: the squareroot
 */
int my_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (my_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - recurses the natural square root of a number
 * @n: number to calculate the squareroot
 * Return: the answer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (my_sqrt(n, 0));
}
