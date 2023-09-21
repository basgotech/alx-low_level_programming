#include "lists.h"

/**
 * add_node_end - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *currentNode = *head;

newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}
newNode->len = strlen(newNode->str);
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (currentNode->next != NULL)
currentNode = currentNode->next;

currentNode->next = newNode;
return (newNode);
}
