#include "main.h"
/**
 * swap_int - swap a and b
 * @a: first number
 * @b: second number
 * Return: swap
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
