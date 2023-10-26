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
/** declare a variable to maipulate get bit*/
unsigned long int x;
if (n == NULL)
{
return (-1);
}

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

x = 1UL << index;

*n |= x;
return (1);
}
