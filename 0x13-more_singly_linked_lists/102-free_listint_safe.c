#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 * @h: Pointer to a pointer to the head node of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current = *h, *next = NULL;

    while (current != NULL)
    {
        size++;
        next = current->next;
        free(current);
        if (next >= current)
        {
            *h = NULL;
            break;
        }
        current = next;
    }

    return size;
}
