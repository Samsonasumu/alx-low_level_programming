#include "holberton.h"
/**
 *  _puts - Pritns
 * description: _puts
 *@str: pointer to s
 * Return: 0
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
