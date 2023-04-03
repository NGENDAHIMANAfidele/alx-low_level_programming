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

	for (;i > 0; i++)
		s[i] = b;
	n--;
	return (s);
}
