#include "main.h"
#include <stdio.h>
/**
 * print_binary -  print binaruy
 * @n:size
 * Return:uotput
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
	if (n & mask)
	{
	putchar('1');
	}
	else
	{
	putchar('0');
	}
	mask >>= 1;
	}
}
