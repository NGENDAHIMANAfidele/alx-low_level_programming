#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip function
 * @n:input
 * @m:input
 * Return:number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xar_result = n ^ m;
	count = 0;
	while (xor_result != 0)
	{
	count++;
	xor_result &= (xor_result - 1);
	}
	return (count);
}
