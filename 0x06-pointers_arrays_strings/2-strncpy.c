#include "main.h"
/**
 *  * _strncpy - function that copies at most n characters from src to dest.
 *   * @dest: The destination string copy goes to.
 *    *@src: src of strings to be copied
 *    *@n: The maximum number of characters to copy.
 *     * Return:  The destination string.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}


for (; n > i; i++)
dest[i] = '\0';

return (dest);
}

