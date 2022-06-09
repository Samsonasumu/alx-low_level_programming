#include "main.h"
/**
 * print_line - prints a straight linen times
 * @n: the number of times n is printed
 * Return: none
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
