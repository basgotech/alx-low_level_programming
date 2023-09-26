#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: A pointer to the head pointer of the linked list.
 * Return: The data (n) of the removed head node,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{

listint_t *temp_list = *head;
int data_re;

if (head == NULL || *head == NULL)
{
return (0);
}

data_re = temp_list->n;

*head = (*head)->next;
free(temp_list);

return (data_re);
}
