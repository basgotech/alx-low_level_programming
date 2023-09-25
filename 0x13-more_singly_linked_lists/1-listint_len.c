#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements (nodes) in the linked list.
 */
size_t listint_len(const listint_t *h)
{
/* Initialize a couter to zero */
size_t count_length = 0;

while (h != NULL)
{
count_length++;
h = h->next;
}

return (count_length);

}
