#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the head pointer of the linked list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{

listint_t *prevNodeList = NULL;
listint_t *currentList = *head;
listint_t *NextNode;

while (currentList != NULL)
{
NextNode = currentList->next;
currentList->next = prevNodeList;

prevNodeList = currentList;
currentList = NextNode;
}

*head = prevNodeList;

return (*head);
}
