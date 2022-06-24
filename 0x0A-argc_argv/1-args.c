#include <stdio.
/**
 * main - prints the number of command line arguments
 * @argc: number of command line arguments
 * @argv: array that contains the programs command line arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
