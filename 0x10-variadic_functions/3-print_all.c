#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print anything
 * @char:input
 * @format:format
 * Return:output
 */

void print_all(const char* const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char* s;
	int pos;

	va_start(args, format);
	pos = 0;

	while (format[pos] != '\0')
	{
	if (format[pos] == 'c')
	{
	c = va_arg(args, int);
	printf("%c", c);
	}
	else if (format[pos] == 'i')
	{
	i = va_arg(args, int);
	printf("%d", i);
	}
	else if (format[pos] == 'f')
	{
	f = (float) va_arg(args, double);
	printf("%f", f);
	}
	else if (format[pos] == 's')
	{
	s = va_arg(args, char*);
	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", s);
	}
	}
	pos++;
	}
	printf("\n");
	va_end(args);
}
