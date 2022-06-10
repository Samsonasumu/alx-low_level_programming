#include <stdio.h>
/**
 * main - function to print each 5 and 3
 * Return: Always 0
 */
int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 2; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
