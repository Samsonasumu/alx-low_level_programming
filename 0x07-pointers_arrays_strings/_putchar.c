#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: on succes 1 on error -1
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
