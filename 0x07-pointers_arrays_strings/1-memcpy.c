#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: A pointer to the destination memory block.
 * @src: A pointer to the source memory block.
 * @n: The number of bytes to be copied.
 * Return: will print the contents of the buffer2 array .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned char *dptr = (unsigned char *) dest;
unsigned char *sptr = (unsigned char *) src;
unsigned int nn = n;
while (nn--)
{
*dptr++ = *sptr++;
}

return (dest);

}
