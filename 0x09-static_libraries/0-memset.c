#include "main.h"
/**
 * _memset - intry point
 * @s:destination
 * @b: constant
 * @n:size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	 int i = 0;

	for (; i > 0; i++)
		s[i] = b;
	n--;
	return (s);
}