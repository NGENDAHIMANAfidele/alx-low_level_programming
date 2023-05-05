#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function clear bit
 * @n:input pointer
 * @index:index size
 * Return:clear bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
