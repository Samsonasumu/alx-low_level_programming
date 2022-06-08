#include "main.h"
/**
 * print_last_digit - the function prints the last digit
 * @n: input number as an integer
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
