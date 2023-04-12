#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - argument
 * @ac:input
 * @av:array
 * Return: str
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, k;
	char *str;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	len = len + strlen(av[i]) + 1;
	}
	str = (char *) malloc(sizeof(char) * len);
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
	str[k++] = av[i][j];
	}
	str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
