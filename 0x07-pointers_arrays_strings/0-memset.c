#include "main.h"

/**
 * _memset - used to fill memory block
 * @b: is assigned to the byte pointed to by ptr
 * @s: pointer to unsigned char pointer.
 * @n: function starts a loop that iterates over the
 * Return: last line of the function returns the dest pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned char *ptr = (unsigned char *) s;
while (n--)
*ptr++ = b;

return (s);
}
