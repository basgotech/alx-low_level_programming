#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t in, x, y;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	y = (size_t)sqrt((double)size);
	in = 0;
	x = 0;

	do {
		prev = list;
		x++;
		in = x * y;

		while (list->next && list->index < in)
			list = list->next;

		if (list->next == NULL && in != list->index)
			in = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)in, list->n);

	} while (in < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
