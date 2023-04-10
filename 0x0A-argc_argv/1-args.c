#include <stdio.h>
/**
 * main - count the numbers of arg
 * @argc: argument count
 * @argv:number of array
 * Return:0;
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
