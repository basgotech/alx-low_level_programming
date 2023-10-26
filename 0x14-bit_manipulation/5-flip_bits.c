#include "main.h"

/**
 * flip_bits - calculate the number of bits to flip to convert
 * one unsigned long int (n) into another (m).
 * @n: the first unsigned long int.
 * @m: The second unsigned long int.
 * Return: The number of bits that need to be flipped to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/** declare a variable to maipulate get bit*/
unsigned long int x;
unsigned int len;

x = n ^ m;
len = 0;

while (x != 0)
{
if (x & 1)
{
len++;
}
x >>= 1;
}

return (len);
}
