[200~#include "lists.h"

/**
 *  * insert_dnodeint_at_index - inserts a new node at a given position
 *   * @h: pointer to the address of the head of the doubly linked list
 *    * @idx: index of the list where the new node should be added
 *     * @n: value to be assigned to the data (n) of the new node
 *      * Return: the address of the new node, or NULL if it failed
 *       */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
{
return (NULL);
}
}
if (tmp->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
return (new);
}
