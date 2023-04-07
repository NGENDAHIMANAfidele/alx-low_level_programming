#include "main.h"
/**
 * _strspn - entry point
 * @s:input
 * @accept:input
 * Return:o
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;
	int i = 0;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{
	if (*s == accept[j])
	{
	i++;
	break;
	}
	else if (accept[j + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}
