#include "main.h"
/**
 * print_number - prints an integer
 * @n: input number
 * Return: none
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -1;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
