#include "lists.h"

/**
 * print_listint - Prints the elements of a linked
 * list and returns the number of nodes.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
size_t node = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
node++;
}
return (count);
}
