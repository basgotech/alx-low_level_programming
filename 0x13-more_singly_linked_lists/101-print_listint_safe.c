#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked
 * list while avoiding infinite loops.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head) {
    const listint_t *slow;
    const listint_t *fast;
    size_t node_count;
    node_count = 0;
    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL) {
        printf("%d\n", slow->n);
        node_count++;
        slow = slow->next;
        fast = fast->next->next;


        if (slow == fast) {
            printf("%d\n", slow->n);
            node_count++;


            exit(98);
        }
    }


    while (slow != NULL) {
        printf("%d\n", slow->n);
        node_count++;
        slow = slow->next;
    }

    return node_count;
}
