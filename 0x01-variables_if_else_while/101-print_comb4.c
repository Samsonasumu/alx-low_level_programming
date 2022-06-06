#include <stdio.h>
/**
 * main - start of ececution
 * Return: always 0 for sucess
 */
int main(void)
{
int dig1, dig2, dig3;
for (dig1 = 0; dig1 < 8; dig1++)
for (dig2 = dig1 + 1; dig2 < 9; dig2++)
{
for (dig3 = dig2 + 1; dig2 < 10; dig3++)
{
putchar((dig1 % 10) + '0');
putchar((dig2 % 10) + '0');
putchar((dig3 % 10) + '0');
if (dig1 == 7 && dig2 == 8 && dig3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
