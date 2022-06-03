#include <stdio.h>
/**
 *  * main - prints numbers between 0 to 9 and letters between a to f
 *   * Return: 0 if successfully executed
*/
int main(void)
{
int b;
char b_16;
for (b = 48; b < 58; b++)
{
putchar(b);
}
for (b_16 = 'a'; b_16 <= 'f'; b_16++)
{
putchar(b_16);
}
putchar('\n');
return (0);
}
