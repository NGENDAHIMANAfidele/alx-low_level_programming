#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc:input
 * @argv:array
 * @result:output
 * @atoi:convert string
 * Return:0;
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	if (*op == '/' && num2 == 0)
	{
	printf("Error\n");
	return (100);
	}
	func_ptr = get_op_func(op);
	if (func_ptr == NULL)
	{
	printf("Error\n");
	return (99);
	}
	result = func_ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
