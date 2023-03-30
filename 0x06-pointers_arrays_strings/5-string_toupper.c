#include "main.h"
/**
 * string_toupper - changing the lowercase to upper case
 * @v: input
 * Return: uppercase
 */
char *string_toupper(char *v)
{
	int i;

	for (i = 0; v[i] != '\0'; i++)
	{
		if (v[i] >= 'a' && v[i] <= 'z')
		{
			v[i] = v[i] - 32;
		}
	}
	return (v);
}
