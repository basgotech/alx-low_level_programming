#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp_swap;
while (head != NULL)
{
temp_swap = head;
head = head->next;
free(temp_swap);
}
}
