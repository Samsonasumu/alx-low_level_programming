#include <stdio.h>
#include <unistd.h>
/**
 * Main - is the start of excecution
 * Return - always 1 if success
*/
int main(void)
{
	write(2, "and the piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
