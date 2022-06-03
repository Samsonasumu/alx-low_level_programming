nclude <stdio.h>
/**
 *  * main - prints the alphabet except q and e
 *   *
 *    * Return: 0 if successful
 *     */
int main(void)
{
		char alph;

			for (alph = 'a'; alph <= 'z'; alph++)
					{
								if (alph == 'q' || alph == 'e')
												continue;
										putchar(alph);
											}
				putchar('\n');
					return (0);
}

    
