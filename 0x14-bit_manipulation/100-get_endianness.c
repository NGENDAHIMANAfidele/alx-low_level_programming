#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function get
 * @Return:return the endian
 */
int get_endianness(void)
{
	unsigned int num;
	char *byte_ptr;

	num = 1;
	byte_ptr = (char *)&num;

	if (*byte_ptr == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
