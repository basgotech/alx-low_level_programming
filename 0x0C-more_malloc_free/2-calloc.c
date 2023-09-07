
#include "main.h"
#include <stdlib.h>
/**
 * _memset - used to fill memory block
 * @b: is assigned to the byte pointed to by ptr
 * @s: pointer to unsigned char pointer.
 * @n: function starts a loop that iterates over the
 * Return: last line of the function returns the dest pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned char *ptr = (unsigned char *) s;
while (n--)
*ptr++ = b;

return (s);
}
/**
 * _calloc - a function that allocates memory-
 * for an array, using malloc.
 * @nmemb:The number of elements in the array.
 * @size:The size of each element in bytes.
 * Return: allocates memory for an array of nmemb.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pointer;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

pointer = malloc(nmemb * size);
if (pointer == NULL)
{
return (NULL);
}

_memset(pointer, 0, nmemb * size);
return (pointer);
}
