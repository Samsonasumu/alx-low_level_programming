#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int k, l;

	for (k = 0; k <= 9; k++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
