#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return:  0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int x;
char *c;
c = (char *) &x;
x = 0x76543210;

if (*c == 0x10)
{
return (1);
}
else
{
return (0);
}

}
