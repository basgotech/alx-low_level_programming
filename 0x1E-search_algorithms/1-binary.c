#include "search_algos.h"

/**
 * custom_recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @arr: input array
 * @arr_size: size of the array
 * @target: value to search for
 * Return: index of the target value
 */
int custom_recursive_search(int *arr, size_t arr_size, int target)
{
	size_t half = arr_size / 2;
	size_t i;

	if (arr == NULL || arr_size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < arr_size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", arr[i]);

	printf("\n");

	if (half && arr_size % 2 == 0)
		half--;

	if (target == arr[half])
		return ((int)half);

	if (target < arr[half])
		return (custom_recursive_search(arr, half, target));

	half++;

	return (custom_recursive_search(arr + half, arr_size - half, target) + half);
}

/**
 * binary_search - calls custom_recursive_search to return
 * the index of the number
 *
 * @arr: input array
 * @arr_size: size of the array
 * @target: value to search for
 * Return: index of the target value
 */
int binary_search(int *arr, size_t arr_size, int target)
{
	int index;

	index = custom_recursive_search(arr, arr_size, target);

	if (index >= 0 && arr[index] != target)
		return (-1);

	return (index);
}
