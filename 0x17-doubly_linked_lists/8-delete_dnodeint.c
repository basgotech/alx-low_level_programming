#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the address of the head of the doubly linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current_pos, *temp_swap;
unsigned int i;
if (head == NULL || *head == NULL)
{
return (-1);
}
current_pos = *head;
if (index == 0)
{
*head = current_pos->next;
if (*head != NULL)
{(*head)->prev = NULL;
}
free(current_pos);
return (1);
}
for (i = 0; i < index && current_pos != NULL; i++)
{
current_pos = current_pos->next;
}
if (current_pos == NULL)
{return (-1);
}
temp_swap = current_pos->prev;
temp_swap->next = current_pos->next;
if (current_pos->next != NULL)
{
current_pos->next->prev = temp_swap;
}
free(current_pos);
return (1);
}
