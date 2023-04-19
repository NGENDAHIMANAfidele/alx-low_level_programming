#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - array function
 * @array:array
 * @size:size
 * @action:location
 * Return:output
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	while (a < size)
	{
	action(array[a]);
	a++;
	}
}
