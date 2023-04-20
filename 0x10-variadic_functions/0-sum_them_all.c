#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function sum
 * @n:input
 * Return:sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
