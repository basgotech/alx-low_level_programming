#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  Perform a Jump search to find the index of a given value
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
int index_val, mid, x, las_ch;
if (array == NULL || size == 0)
{
return (-1);
}
mid = (int)sqrt((double)size);
x = 0;
las_ch = index_val = 0;
do {
printf("Value checked array[%d] = [%d]\n", index_val, array[index_val]);
if (array[index_val] == value)
{
return (index_val);
}
x++;
las_ch = index_val;
index_val = x *mid;
} while (index_val < (int)size && array[index_val] < value);
printf("Value found between indexes [%d] and [%d]\n", las_ch, index_val);
for (; las_ch <= index_val && las_ch < (int)size; las_ch++)
{
printf("Value checked array[%d] = [%d]\n", las_ch, array[las_ch]);
if (array[las_ch] == value)
{
return (las_ch);
}
}
return (-1);
}
