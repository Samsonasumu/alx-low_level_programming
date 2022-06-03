#include <stdio.h>
/**
 *  * main - prints all single digit numbers of base 10 starting from 0
 *   * Return: 0 if executed succesfully
*/
int main(void)
{
int a = 0;
while (a <= 9)
{
printf("%d", a);
a++;
}
putchar('\n');
return (0);
}
