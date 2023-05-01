#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function for safe
 * @h:pointer
 * Return:return the output
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t *current;
	listint_t *next;

	count = 0;
	current = *h;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	count++;
	if (next == NULL || next < current)
	{
	break;
	}
	current = next;
	}
	*h = NULL;
	return (count);
}
