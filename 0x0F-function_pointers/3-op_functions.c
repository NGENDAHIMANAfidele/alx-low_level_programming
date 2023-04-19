#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - function addition
 * @a:input
 * @b:input
 * Return:output
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function sub
 * @a:input
 * @b:input
 * Return:output
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function multiplicartion
 * @a:input
 * @b:input
 * Return:output
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function div
 * @a:input
 * @b:input
 * Return:output
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error: division by zero\n");
	return (0);
	}
	return (a / b);
}
/**
 * op_mod - function module
 * @a:input
 * @b:input
 * Return:output
 */
int op_mod(int a, int b)
{
	if (b == 0)
{
	printf("Error: division by zero\n");
	return (0);
	}
	return (a % b);
}
