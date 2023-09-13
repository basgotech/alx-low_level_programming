#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: list of elemt stored in
 * @size:  is the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: f no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

i = 0;
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
i++;
}
return (-1);
}
