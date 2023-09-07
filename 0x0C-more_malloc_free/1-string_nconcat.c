#include "main.h"
#include <stdlib.h>
#include <string.h>
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
 * string_nconcat-  a function that concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from the second string.
 * Return: Return concatinated String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1;
unsigned int len2;
char *new_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
{
n = len2;
}

new_str = malloc(len1 + n + 1);
if (new_str == NULL)
{
return (NULL);
}

_memcpy(new_str, s1, len1);

_memcpy(new_str + len1, s2, n);

new_str[len1 + n] = '\0';

return (new_str);
}

