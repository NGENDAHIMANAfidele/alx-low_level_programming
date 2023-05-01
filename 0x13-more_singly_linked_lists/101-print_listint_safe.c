#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *next;
	size_t count;

	count = 0;
	current = head;
	next = NULL;

	while (current != NULL)
	{
	printf("[%p] %d\n", (void *)current, current->n);
	count++;
	next = current->next;
	if (next >= current)
	{
	printf("-> [%p] %d\n", (void *)next, next->n);
	exit(98);
	}
	current = next;
	}

	return (count);
}
