#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the head node of the linked list
 * @index: index of the node to be deleted
 * Return: 1 if the deletion was successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);
	current = *head;
	previous = NULL;
	for (i = 0; i < index && current != NULL; i++)
	{
	previous = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	if (previous == NULL)
	*head = current->next;
	else
	previous->next = current->next;

	free(current);

	return (1);
}
