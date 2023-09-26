#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked
 * list while avoiding infinite loops.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slowSave, *fastSave;

size_t length;

slowSave = head;
fastSave = head;
length = 0;

while (fastSave != NULL && fastSave->next != NULL)
{
printf("[%p] %d\n", (void *)slowSave, slowSave->n);
length++;
slowSave = slowSave->next;
fastSave = fastSave->next->next;

if (slowSave == fastSave)
{
printf("-> [%p] %d\n", (void *)slowSave, slowSave->n);
exit(98);
}
}

if (fastSave != NULL)
{
printf("[%p] %d\n", (void *)slowSave, slowSave->n);
length++;
}

return (length);
}
