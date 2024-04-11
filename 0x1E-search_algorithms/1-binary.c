#include "search_algos.h"

/**
 * binary_search - binary search 
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
int low;
int high;
int mid;
size_t i;
if (array == NULL)
{
return -1;
}
low = 0;
high = size - 1;

while (low <= high)
{
mid = low + (high - low) / 2;

printf("Searching in array: ");
for (i = low; i <= (size_t)high; i++)
{
printf("%d ", array[i]);
}
printf("\n");

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid - 1;
}
}
return (-1);
}
