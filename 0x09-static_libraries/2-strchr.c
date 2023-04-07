#include "main.h"
/**
 * _strchr - function
 * @s: address
 * @c: input
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
