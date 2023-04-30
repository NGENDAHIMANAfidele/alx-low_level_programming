#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node on list
 * @head:pointer
 * @n: The integer
 * Return: return the new node or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (!i)
	return (NULL);

	i->n = n;
	i->next = *head;
	*head = i;

	return (i);
}
