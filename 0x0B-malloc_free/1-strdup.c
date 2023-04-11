#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - newly allocated space
 * @str:input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len;

	if (str == NULL)
	{
	return (NULL);
	}
	len = strlen(str) + 1;
	duplicate = malloc(len);
	if (duplicate == NULL)
	{
	return (NULL);
	}
	memcpy(duplicate, str, len);
	return (duplicate);
}
