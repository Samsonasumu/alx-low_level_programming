#include <stdio.h>
#include <ctype.h>
/**
 *  * main- prints the alphabet in lowercase then in uppercase
 *   *
 *    * Return: 0 if successfully executed
 *     */
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
					putchar('\n');
						return (0);
}
