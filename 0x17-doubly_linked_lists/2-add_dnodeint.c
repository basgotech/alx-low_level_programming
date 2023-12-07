#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node_first;
if (head == NULL)
{
return (NULL);
}
new_node_first = malloc(sizeof(dlistint_t));
if (new_node_first == NULL)
{
return (NULL);
}
new_node_first->n = n;
new_node_first->prev = NULL;
new_node_first->next = *head;
if (*head != NULL)
{
(*head)->prev = new_node_first;
}
*head = new_node_first;
return (new_node_first);
}
