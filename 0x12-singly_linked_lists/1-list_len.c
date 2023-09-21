#include "lists.h"

/**
 * list_len - function used to get length of liked lists
 * @h: const pointer type
 * Return: length of lists
 */
size_t list_len(const list_t *h)
{
size_t size_count = 0;
while (h != NULL)
{
size_count++;
h = h->next;
}
return (size_count);
}
