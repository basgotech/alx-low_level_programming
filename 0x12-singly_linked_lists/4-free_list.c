#include "lists.h"

/**
 *free_list - Frees all of the nodes in a linked list.
 *@head: A pointer to the head of the list.
 */
void free_list(list_t *head)
{
list_t *currentNode;

currentNode = head;
while (currentNode != NULL)
{
list_t *nextNode = currentNode->next;
free(currentNode->str);
free(currentNode);
currentNode = nextNode;
}

head = NULL;
}
