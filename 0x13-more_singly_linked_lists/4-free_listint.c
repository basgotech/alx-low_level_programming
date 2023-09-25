#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *current_list = head;
while (current_list != NULL)
{
listint_t *next_list = current_list->next;
free(current_list);
current_list = next_list;
}

}
