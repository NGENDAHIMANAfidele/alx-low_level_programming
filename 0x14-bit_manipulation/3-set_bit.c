#include "main.h"
#include <stdio.h>
/**
 * set_bit - set the index
 * @n:input
 * @index:set the index
 * Return: 1 or 0;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
