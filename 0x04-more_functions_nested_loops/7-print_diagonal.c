#include "main.h"
/**
 * print_diagonal - this function prints a diagoanl line n times
 * @n: number of times diagona;l line is printed
 * Return: always zero
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
