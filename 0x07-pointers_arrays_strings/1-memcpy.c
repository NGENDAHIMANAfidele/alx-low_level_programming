#include "main.h"
/**
 * _memcpy - memory copy
 * @dest: destination
 * @src: memory bsopurce
 * @n: size
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
