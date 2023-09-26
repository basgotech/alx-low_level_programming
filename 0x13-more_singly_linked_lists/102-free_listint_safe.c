#include "lists.h"

size_t free_listint_safe(listint_t **h) {


listint_t *slow = *h;
listint_t *fast = *h;
listint_t *loop_start;
size_t node_count = 0;


if (h == NULL || *h == NULL) {
        return (0);
}

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{

slow = *h;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

loop_start = slow;
do
{
listint_t *temp = slow->next;
free(slow);
slow = temp;
node_count++;
} while (slow != loop_start);

*h = NULL;

return (node_count);
}
}

while (*h != NULL) {
listint_t *temp = (*h)->next;
free(*h);
*h = temp;
node_count++;
}

return (node_count);
}
