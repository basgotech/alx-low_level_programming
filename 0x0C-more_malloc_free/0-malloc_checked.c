#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - avoid errors caused by failed memory allocations
 * @b: number of bytes
 * Return: Pointer string
 */
void *malloc_checked(unsigned int b)
{
void *str;

str = malloc(b);
if (str == NULL)
exit(98);

return (str);
}
