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
unsigned long int m;
int bit;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

m = 1UL << index;
bit = (n & m) ? 1 : 0;

return (bit);
}
