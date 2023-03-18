#include <stdio.h>
/**
 * main -main function
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	printf("\n");
	return (0);
}
