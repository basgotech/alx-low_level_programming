#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *runn;

	if (list == NULL)
		return (NULL);

	runn = list;

	do {
		list = runn;
		runn = runn->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)runn->index, runn->n);
	} while (runn->express && runn->n < value);

	if (runn->express == NULL)
	{
		list = runn;
		while (runn->next)
			runn = runn->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)runn->index);

	while (list != runn->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
