#include <stdio.h>
/**
 * main - Entry main
 * Return:alwayss 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (i < j && i != 17)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
