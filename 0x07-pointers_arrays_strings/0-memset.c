#include "main.h"
/*
 * 0_memset - intry point
 * @s:destination
 * @b: constant
 * @n:size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i] = b;
	i++;
	return (s);
}
