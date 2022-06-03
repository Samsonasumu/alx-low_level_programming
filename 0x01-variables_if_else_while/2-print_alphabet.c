#include <stdio.h>
#include <ctype.h>
/**
 *
 * main first prints alphabets in lowercase then in capital letters
*/
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
 putchar(alph);
}
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(toupper(alph));
}

return (0);
}

