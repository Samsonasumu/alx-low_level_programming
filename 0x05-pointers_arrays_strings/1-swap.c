#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*b = *a;
	*b = x;
}
