#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node, starting from 0
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int b;
dlistint_t *current_pos = head;
for (b = 0; current_pos != NULL && b < index; b++)
{
current_pos = current_pos->next;
}
return (current_pos);
}
