#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop function
 * @head:pointer
 * Return:return pop
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (i);
}
