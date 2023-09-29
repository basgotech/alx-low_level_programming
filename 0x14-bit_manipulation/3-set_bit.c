#include "main.h"

/**
 * set_bit - used to sets the value of a bit
 * to 1 at a given index.
 * @n: value
 * @index: index value
 * Return: return bit set
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m;
if (n == NULL)
{
return (-1);
}

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

m = 1UL << index;

*n |= m;
return (1);
}
