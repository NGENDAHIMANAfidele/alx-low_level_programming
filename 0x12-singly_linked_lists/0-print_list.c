#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print the list
 * @h:pointer the string
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	i++;
	}
	return (i);
}
