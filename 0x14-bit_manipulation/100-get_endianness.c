#include "main.h"

/**
 * get_endianness - checks if a machine is a little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
