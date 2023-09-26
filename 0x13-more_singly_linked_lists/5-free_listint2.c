#include "lists.h"

/**
 * free_listint2 - Frees a list of integers and
 * sets the head pointer to NULL.
 * @head: A pointer to the head pointer of the linked list.
 */
void free_listint2(listint_t **head)
{

listint_t *currentList;
listint_t *nextList;

if (head == NULL || *head == NULL)
{
return;
}

currentList = *head;

while (currentList != NULLi)
{
nextList = currentList->next;
free(currentList);
currentList = nextList;
}
*head = NULL;

}
