#include "main.h"

/**
 * binary_to_uint - used to convert binary to unit
 * @b: store binary number
 * Return: return converted units
 */
unsigned int binary_to_uint(const char *b)
{
/** declare a variable to hold converted unit*/
unsigned int btu;

if (b == NULL)
{
return (0);
}
/** initilize a variable with 0*/
btu = 0;

/** loop the binary each bit*/
while (*b)
{
if (*b != '0' && *b != '1')
{
return (0);
}
btu = btu * 2 + (*b - '0');
b++;
}

/** Return converted unit from binary*/
return (btu);
}
