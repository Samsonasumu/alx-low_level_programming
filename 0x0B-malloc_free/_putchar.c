#include <unistd.h>
#include "main.h"
/**
 * _putchar.c - writes char c to stdout
 * @c: char to print
 * Return: 1 on sucess, -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
