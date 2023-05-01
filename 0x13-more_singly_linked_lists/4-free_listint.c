#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	for (i = head; i != NULL;)
	{
	head = i->next;
	free(i);
	i = head;
	}
}
