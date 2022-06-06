#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of random generated number
 * Return: 0 if succes
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
/*your code goes here*/
if (last_digit > 5)
{
printf("Last digit of %d is %d greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d is greater than 6 and not 0\n", n, last_digit);
}
return (0);
}
