#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function of the sum
 * @head: pointer to the head
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	for (current = head; current != NULL; current = current->next)
	{
	sum += current->n;
	}

	return (sum);
}
