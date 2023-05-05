#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - print to convert binary
 * @b: pointer to the size
 * Return:result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	size_t i;
	char c;

	result = 0;
	if (b == NULL)
	{
	return (0);
	}

	for (i = 0; i < strlen(b); i++)
	{
	c = b[i];
	if (c != '0' && c != '1')
	{
	return (0);
	}
	result <<= 1;
	result += (c - '0');
	}
	return (result);
}
