#include "lists.h"

/**
 * createNode - Creates a new node with the given data.
 * @data_insert: The integer data to be stored in the new node.
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
listint_t *createNode(int data_insert)
{
listint_t *newNodeAtEnd = (listint_t *)malloc(sizeof(listint_t));
if (newNodeAtEnd == NULL)
{
printf("Memory allocation failed!\n");
exit(1);
}
newNodeAtEnd->n = data_insert;
newNodeAtEnd->next = NULL;
return (newNodeAtEnd);
}

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to store in the new node.
 * Return: A pointer to the newly added node (the new tail),
 * or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNodeAtEnd = createNode(n);
if (newNodeAtEnd == NULL)
{
return (NULL);
}

if (*head == NULL)
{
*head = newNodeAtEnd;
}
else
{
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = newNodeAtEnd;
}
return (newNodeAtEnd);
}
