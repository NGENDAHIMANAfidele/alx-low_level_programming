#include "main.h"
/**
 * reverse_array - make the reverse
 * @a: input
 * @n: copy
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
