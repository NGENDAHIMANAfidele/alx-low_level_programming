#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc:input
 * @argv:array
 * Return:0
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *opcodes;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	num_bytes = atoi(argv[1]);
	int i;

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}
	opcodes = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x", *(opcodes + i));
	}
	printf("\n");
	return (0);
}
