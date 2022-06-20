#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9 followed by a new line
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= 9; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
