#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - Returns the linkede list
 * @head: Pointer to the head
 * @index: Index of the node to return, starting at 0
 * Return: Pointer to the  node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	i = 0;
	current = head;

	while (current != NULL && i < index)
	{
	current = current->next;
	i++;
	}

	return (current);
}
