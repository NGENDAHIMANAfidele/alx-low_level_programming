#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all element
 * @h: pointer
 * Return: return the element
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	a++;
	}

	return (a);
}
