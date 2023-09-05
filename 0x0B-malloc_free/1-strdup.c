#include "main.h"
#include <stdlib.h>
#define my_null ((void *)0)

/**
 * _strlen - compute length of s
 * @s: store memory address of s
 * Return: length of s
 */
int _strlen(char *s)
{
return ((*s) ? _strlen(++s) + 1 : 0); /* return length of s*/
}

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
/**
 * _strdup- a pointer to a newly allocated space in memory
 *@src: string
 *Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *src)
{
int len;
char *dst;

len = _strlen(src) + 1;
dst = malloc(len);
if (dst != my_null)
{
_memcpy(dst, src, len);
}
return (dst);
}
