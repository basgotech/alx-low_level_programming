#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n:given value
 * @index: index
 * Return: return value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
/** declare a variable to maipulate get bit*/
unsigned long int x;

/** declare a variable to store bit*/
int bit;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

x = 1UL << index;
bit = (n & x) ? 1 : 0;

return (bit);
}
