#include "main.h"
#include <stdlib.h>

/**
 *array_range-a function that creates an array of integers.
 *@min:The minimum value of the array.
 *@max: The maximum value of the array.
 *Return: a pointer to the allocated array.
 */

int *array_range(int min, int max)
{
int *array;
int size;
int i;

if (min > max)
{
return (NULL);
}

size = max - min + 1;

array = malloc(size *sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
