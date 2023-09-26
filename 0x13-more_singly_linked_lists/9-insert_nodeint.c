#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node with a given int
 * @head: A pointer to the head pointer of the linked list.
 * @idx: The index at which to insert the new node (starting at 0).
 * @n: The integer value to be stored in the new node.
 * Return: The address of the new node,or NULL if insertion failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *NewNodeInsert, *PrevNode, *CurrentNode;
unsigned int i;

if ((head == NULL || idx > 0) && (*head == NULL))
{
return (NULL);
}

NewNodeInsert = malloc(sizeof(listint_t));
if (NewNodeInsert == NULL)
{
return (NULL);
}

NewNodeInsert->n = n;

if (idx == 0)
{
NewNodeInsert->next = *head;
*head = NewNodeInsert;
return (NewNodeInsert);
}

CurrentNode = *head;
PrevNode = NULL;

for (i = 0; i < idx && CurrentNode != NULL; i++)
{
PrevNode = CurrentNode;
CurrentNode = CurrentNode->next;
}
if (i < idx)
{
free(NewNodeInsert);
return (NULL);
}
PrevNode->next = NewNodeInsert;
NewNodeInsert->next = CurrentNode;
return (NewNodeInsert);
}
