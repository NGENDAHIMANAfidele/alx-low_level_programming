#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function for print string
 * @separator:separator
 * @n:size
 * Return:args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	char *str = va_arg(args, char*);

	if (str != NULL)
	{
	printf("%s", str);
	}
	else
	{
	printf("(nil)");
	}
	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
