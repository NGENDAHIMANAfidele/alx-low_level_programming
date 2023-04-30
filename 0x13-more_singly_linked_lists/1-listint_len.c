#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * @h: A pointer to the head
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
	return (i);
	}

	i++;

	while (h->next != NULL)
	{
	i++;
	h = h->next;
	}

	return (i);
}
