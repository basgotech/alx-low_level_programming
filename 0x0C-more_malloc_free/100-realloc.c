#include "main.h"
#include <stdlib.h>

/**
 *_realloc-a function that reallocates a memory block using
 * malloc and free
 *@ptr:A pointer to the memory previously allocated
 * with a call to malloc().
 *@old_size:The size, in bytes, of the allocated space for ptr.
 *@new_size:The new size, in bytes of the new memory block.
 *Return:a pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_pointer;
unsigned int i;

if (ptr == NULL)
{
new_pointer = malloc(new_size);
return (new_pointer);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
new_pointer = malloc(new_size);
if (new_pointer == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new_pointer[i] = ((char *)ptr)[i];
free(ptr);
return (new_pointer);
}
