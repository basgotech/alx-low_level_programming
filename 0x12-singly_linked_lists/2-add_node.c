#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
int count = 0;
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
new_node->str = strdup(str);
while (str[count] != '\0')
	count++;
new_node->len = count;
new_node->next = *head;
*head = new_node;
return (new_node);
}
