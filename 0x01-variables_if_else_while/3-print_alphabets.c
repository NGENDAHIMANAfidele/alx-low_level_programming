#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	char b;
	char c;

	for (b = 'a' ; b <= 'z' ; b++)
	{
		putchar(b);
	}
	printf("\n");
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	return (0);
}


