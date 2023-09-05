#include <stdlib.h>
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
 * str_concat - the function calculates the length of the concatenated
 * string by adding the lengths of
 * the two input strings plus one for the
 * null terminator.
 * @s1: string one
 * @s2: string two
 * Return: concatinated string
*/
char *str_concat(char *s1, char *s2)
{

int len1, len2, len;
char *new_str;
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}

len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
new_str = malloc(len);
if (new_str == NULL)
{
return (NULL);
}

_memcpy(new_str, s1, len1);
_memcpy(new_str + len1, s2, len2);

new_str[len - 1] = '\0';

return (new_str);
}
