#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specific
 * index in a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting at 0).
 * Return: A pointer to the node at the specified index,
 * or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int z;
listint_t *currentList;
currentList = head;

for (z = 0; currentList != NULL && z < index; z++)
{
currentList = currentList->next;
}

if (currentList == NULL)
{
return (NULL);
}

return (currentList);
}
