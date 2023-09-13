#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator-  a function that executes a function given as a
 * parameter on each element of an array.
 * @array: store value that prints
 * @size: size of array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t index;

for (index = 0; index < size; index++)
{
action(array[index]);
}

}
