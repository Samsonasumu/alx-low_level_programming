#include <stdio.h>
/**
 * main - computes and print the sum of multiples of 3 and 5
 * Return: Always 0 for success
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;

	}
	printf("%d\n", b);
	return (0);
}
