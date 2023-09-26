#include "lists.h"

/**
 * find_listint_loop - Detects and finds the starting
 * node of a loop in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The address of the node where the loop
 * starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_list = head;
listint_t *fast_list = head;

if (!head)
return (NULL);

while (slow_list && fast_list && fast_list->next)
{
fast_list = fast_list->next->next;
slow_list = slow_list->next;
if (fast_list == slow_list)
{
slow_list = head;
while (slow_list != fast_list)
{
slow_list = slow_list->next;
fast_list = fast_list->next;
}
return (fast_list);
}
}

return (NULL);
}
