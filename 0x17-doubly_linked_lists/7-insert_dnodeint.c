#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the address of the head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: value to be assigned to the data (n) of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node_to_ins, *current_pos;
unsigned int b;
if (h == NULL)
{
return (NULL);
}
new_node_to_ins = malloc(sizeof(dlistint_t));
if (new_node_to_ins == NULL)
{
return (NULL);
}
new_node_to_ins->n = n;
new_node_to_ins->prev = NULL;
new_node_to_ins->next = NULL;
if (idx == 0)
{
new_node_to_ins->next = *h;
if (*h != NULL)
{
(*h)->prev = new_node_to_ins;
*h = new_node_to_ins;
return (new_node_to_ins);
}
current_pos = *h;
for (b = 0; b < idx - 1 && current_pos != NULL; b++)
{
current_pos = current_pos->next;
}
if (current_pos == NULL)
{
free(new_node_to_ins);
return (NULL);
}
new_node_to_ins->next = current_pos->next;
new_node_to_ins->prev = current_pos;
if (current_pos->next != NULL)
current_pos->next->prev = new_node_to_ins;
current_pos->next = new_node_to_ins;
return (new_node_to_ins);
}
