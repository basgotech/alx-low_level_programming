#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in array, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1, min;

    if (array == NULL || size == 0)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min = (bound / 2) < size - 1 ? (bound / 2) : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

    return binary_search(array, bound / 2, min, value);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: starting index of the search range
 * @high: ending index of the search range
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in array, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    while (low <= high)
    {
        print_array(array, low, high);
        mid = (low + high) / 2;

        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return (mid);
    }

    return (-1);
}

/**
 * print_array - prints the elements of an array within a range
 * @array: pointer to the first element of the array
 * @low: starting index of the range
 * @high: ending index of the range
 */
void print_array(int *array, size_t low, size_t high)
{
    printf("Searching in array: ");
    for (; low < high; low++)
        printf("%d, ", array[low]);
    printf("%d\n", array[low]);
}
