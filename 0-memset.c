#include "main.h"
/**
 * _memcpy - constant byte
 * @dest: input
 * @src: input
 * @n: size
 * Return:Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	dest[j] = src[j];
	j++;
	return (dest);
}
