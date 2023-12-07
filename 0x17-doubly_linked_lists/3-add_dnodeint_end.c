#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node_end;
dlistint_t *temp_swap;
if (head == NULL)
{
return (NULL);
}
new_node_end = malloc(sizeof(dlistint_t));
if (new_node_end == NULL)
{
return (NULL);
}
new_node_end->n = n;
new_node_end->next = NULL;
if (*head == NULL)
{
new_node_end->prev = NULL;
*head = new_node_end;
return (new_node_end);
}
temp_swap = *head;
while (temp_swap->next != NULL)
{
temp_swap = temp_swap->next;
}
temp_swap->next = new_node_end;
new_node_end->prev = temp_swap;
return (new_node_end);
}
