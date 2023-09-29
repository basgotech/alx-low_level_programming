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
unsigned long int xr;
unsigned int len;

xr = n ^ m;
len = 0;

while (xr != 0)
{
if (xr & 1)
{
len++;
}
xr >>= 1;
}

return (len);
}
