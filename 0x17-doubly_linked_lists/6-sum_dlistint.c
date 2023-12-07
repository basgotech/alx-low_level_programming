#include "lists.h"

/**
 * sum_dlistint - returns the total sum of all the data (n)
 * @head: pointer to the head of the doubly linked list
 * Return: total sum of all the data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
int total_sum = 0;
dlistint_t *current_pos = head;
while (current_pos != NULL)
{
total_sum += current_pos->n;
current_pos = current_pos->next;
}
return (total_sum);
}
