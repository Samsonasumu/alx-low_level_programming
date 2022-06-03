#include <stdio.h>
/**
 *  * main - prints the lowercase alphabet in reverse followed by a new line
 *   * Return: 0 if executed successful
*/
int main(void)
{
char alph = 'z';
while (alph >= 'a')
{
putchar(alph);
alph--;					
}
putchar('\n');		
return (0);
}
