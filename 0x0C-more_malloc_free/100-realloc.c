#include "main.h"
#include <stdlib.h>

/**
 * _memcpy -  function that copies memory area.
 * @dest: A pointer to the destination memory block.
 * @src: A pointer to the source memory block.
 * @n: The number of bytes to be copied.
 * Return: will print the contents of the buffer2 array .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char *dptr = (unsigned char *) dest;
unsigned char *sptr = (unsigned char *) src;
unsigned int nn = n;
while (nn--)
{
*dptr++ = *sptr++;
}

return (dest);

}

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
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL) {
return (malloc(new_size));
}
if (new_size <= old_size)
{
return (ptr);
}
new_ptr= malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
_memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
