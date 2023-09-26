#include "lists.h"

/**
 * free_listint_safe - safely frees a linked list
 * acciounting for loops.
 * @h: A pointer to a pointer to the head of the linked list
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t length_count = 0;
int get_d;
listint_t *t;

if (!h || !*h)
{
return (0);
}

while (*h)
{
get_d = *h - (*h)->next;
if (get_d > 0)
{
t = (*h)->next;
free(*h);
*h = t;
length_count++;
}
else
{
free(*h);
*h = NULL;
length_count++;
break;
}
}

*h = NULL;

return (length_count);

}
