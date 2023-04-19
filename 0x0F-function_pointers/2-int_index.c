#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array:input
 * @size:size
 * @cmp:compare
 * Return:-1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
	return (-1);
	}
	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) != 0)
	{
	return (a);
	}
	}
	return (-1);
}
