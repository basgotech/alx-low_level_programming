#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return:  0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int x;
char *a;
a = (char *) &x;
x = 0x76543210;

if (*a == 0x10)
{
return (1);
}
else
{
return (0);
}

}
