#include "search_algos.h"

/**
 * linear_search - searches for a value in an array in Linear
 * @array: input array
 * @size: size of the array
 * @value: key value
 * Return: Always 0 Exit
 */
int linear_search(int *array, size_t size, int value)
{
int x;
if (array == NULL)
{
return (-1);
}
for (x = 0; x < (int)size; x++)
{
printf("Value checked array[%u] = [%d]\n", x, array[x]);
if (value == array[x])
{
return (x);
}
}
return (-1);
}
