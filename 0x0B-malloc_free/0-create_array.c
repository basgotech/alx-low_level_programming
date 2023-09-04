#include "main.h"
#include <stdlib.h>
#define my_null ((void *)0)
/**
 * create_array-used to allocate memory addres
 * @size: size of array
 * @c: character
 * Return: return alloc
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (my_null);
}

array = malloc(size * sizeof(char));
if (array == my_null)
{
return (my_null);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
