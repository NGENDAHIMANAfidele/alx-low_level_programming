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
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	printf("\n");
	return (0);
}


