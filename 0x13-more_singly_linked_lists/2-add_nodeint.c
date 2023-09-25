#include "lists.h"

/**
 * createNodeAtBiginning - Creates a new node with the given data.
 * @data_insert: The integer data to be stored in the new node.
 * Return: A pointer to the newly created node,
 * or NULL if memory allocation fails.
 */
listint_t *createNodeAtBiginning(int data_insert)
{
listint_t *newNodeApplied = (listint_t *)malloc(sizeof(listint_t));
if (newNodeApplied == NULL)
{
printf("Memory allocation failed!\n");
exit(1);
}
newNodeApplied->n = data_insert;
newNodeApplied->next = NULL;
return (newNodeApplied);
}

/**
 * add_nodeint - Adds a new node at the beginning of
 * a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to store in the new node.
 * Return: A pointer to the newly added node (new head),
 * or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNodeApplied = createNodeAtBiginning(n);
if (newNodeApplied == NULL)
{
return (NULL);
}

newNodeApplied->next = *head;
*head = newNodeApplied;
return (newNodeApplied);

}
