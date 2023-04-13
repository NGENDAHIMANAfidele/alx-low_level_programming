#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory
 * @nmemb:input
 * @size:size
 * Return:output
 */

void* _calloc(unsigned int nmemb, unsigned int size)
{
	void* i;

	i = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	if (i == NULL)
	{
	return (NULL);
	}
	memset(i, 0, nmemb * size);
	return (i);
}
