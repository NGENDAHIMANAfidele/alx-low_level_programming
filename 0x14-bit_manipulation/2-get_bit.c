#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the binary bit
 * @n:size
 * @index: index binary size
 * Return:index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
