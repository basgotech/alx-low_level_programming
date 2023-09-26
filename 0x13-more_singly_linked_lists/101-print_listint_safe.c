#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked
 * list while avoiding infinite loops.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp_list = NULL;
const listint_t *slow_list = NULL;
size_t len_count = 0;
size_t new_list;

temp_list = head;
while (temp_list)
{
printf("[%p] %d\n", (void *)temp_list, temp_list->n);
len_count++;
temp_list = temp_list->next;
slow_list = head;
new_list = 0;
while (new_list < len_count)
{
if (temp_list == slow_list)
{
printf("-> [%p] %d\n", (void *)temp_list, temp_list->n);
return (len_count);
}
slow_list = slow_list->next;
new_list++;
}
if (!head)
{
exit(98);
}
}
return (len_count);
}
