#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - two input
 * @s1:input 1
 * @s2:input2
 * Return:a
 */
char *str_concat(char *s1, char *s2)
{
	char *a;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	a = malloc(strlen(s1) + strlen(s2) + 1);
	if (a == NULL)
	{
	return (NULL);
	}
	strcpy(a, s1);
	strcat(a, s2);
	return (a);
}
