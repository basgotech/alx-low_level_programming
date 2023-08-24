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
char *p = dest;

while (n-- && *src != '\0')
{
*p++ = *src++;
}

*p = '\0';

return (dest);
}
