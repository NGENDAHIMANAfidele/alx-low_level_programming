#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function concatenante
 * @s1:input
 * @s2:input
 * @n:size
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	a = strlen(s1);
	b = strlen(s2);
	if (n >= b)
	{
	n = b;
	}
	result = (char *) malloc(a + n + 1);
	if (result == NULL)
	{
	return (NULL);
	}
	memcpy(result, s1, a);
	memcpy(result + a, s2, n);
	result[a + n] = '\0';
	return (result);
}
