#include "main.h"
/**
 * print_number - prints an integer
 * @n: input number
 * Return: none
 */
void print_number(int n)
{
	unsigned int x, d, count;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}
	d = x;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((x / count) % 10) + 48);
	}
}
