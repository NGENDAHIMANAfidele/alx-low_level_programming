#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list
 */


size_t list_len(const list_t *h)
{
	int i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
