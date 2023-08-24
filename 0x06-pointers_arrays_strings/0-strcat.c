#include "main.h"
/**
 *  * _strcat - used to concatinate strings.
 *   * @dest: hold concatinated string.
 *    *@src: src of strings to be concatinated
 *     * Return: concatianted strings.
 *
 */

char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*dest)
{
dest++;
}

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (p);
}
