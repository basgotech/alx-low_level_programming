#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index in a listint_t linked list.
 * @head: A pointer to the head pointer of the linked list.
 * @index: The index of the node to delete (starting at 0).
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *currentNode, *prevNodeList;
unsigned int z;

if (head == NULL || *head == NULL) {
return -1;
}

currentNode = *head;
prevNodeList = NULL;

if (index == 0) {
*head = currentNode->next;
free(currentNode);
return (1);
}

for (z = 0; z < index && currentNode != NULL; z++)
{
prevNodeList = currentNode;
currentNode = currentNode->next;
}

if (currentNode == NULL)
{
return (-1);
}

prevNodeList->next = currentNode->next;
free(currentNode);
return (1);
}
