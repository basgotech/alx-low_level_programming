#include "main.h"

/**
 * binary_to_uint - used to conver binary to unit
 * @b: store binary number
 * Return: return converted units
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int conv_unit;

if (b == NULL)
{
return (0);
}
conv_unit = 0;

while (*b)
{
if (*b != '0' && *b != '1')
{
return (0);
}
conv_unit = conv_unit * 2 + (*b - '0');
b++;
}
return (conv_unit);
}
