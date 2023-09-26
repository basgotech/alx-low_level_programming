#include "lists.h"

/**
 * sum_listint - Computes the sum of all integers
 * in a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The sum of all integers in the linked list,
 * or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int total_sum = 0;
listint_t *currentList;
currentList = head;

while (currentList != NULL)
{
total_sum += currentList->n;
currentList = currentList->next;
}

return (total_sum);
}
