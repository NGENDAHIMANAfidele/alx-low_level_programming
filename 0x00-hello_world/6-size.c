#include <stdio.h>
/**
 * main - Size
 * Return: always 0
 */
int main(void)
{
	char a;
	int i;
	long int j;
	long long int f;
	float h;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(h));
	return (0);
}
