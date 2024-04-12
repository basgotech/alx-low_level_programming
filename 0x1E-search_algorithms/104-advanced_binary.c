#include "search_algos.h"

/**
 * recurs_search - searches for a value in an array
 * @array: input arr
 * @size: size of the arr
 * @val: value to search
 * Return: index
 */
int recurs_search(int *array, size_t size, int val)
{
	size_t h = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (h && size % 2 == 0)
		h--;

	if (val == array[h])
	{
		if (h > 0)
			return (recurs_search(array, h + 1, val));
		return ((int)h);
	}

	if (val < array[h])
		return (recurs_search(array, h + 1, val));

	h++;
	return (recurs_search(array + h, size - h, val) + h);
}

/**
 * advanced_binary - calls to recurs_search to return
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int in;

	in = recurs_search(array, size, value);

	if (in >= 0 && array[in] != value)
		return (-1);

	return (in);
}
