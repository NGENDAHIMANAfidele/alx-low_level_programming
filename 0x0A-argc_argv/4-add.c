#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - main function
 * @argc: count
 * @argv: hold
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int output = 0;
	int i;
	int num;

	for (i = 1; i < argc; i++)
	{
	char *arg = argv[i];
	int j;

	for (j = 0; arg[j] != '\0'; j++)
	{
	if (!isdigit(arg[j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	num = atoi(arg);

	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}
	output += num;
	}

	printf("%d\n", output);
	return (0);
}
