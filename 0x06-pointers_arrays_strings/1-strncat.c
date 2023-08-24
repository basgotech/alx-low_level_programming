#include "main.h"
/**
 *  * _strncat - used to concatinate strings.
 *   * @dest: hold concatinated string.
 *    *@src: src of strings to be concatinated
 *    *@n: only n number of string concatinated
 *     * Return: concatianted strings.
 *
 */

char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int i;
while (*dest)
{
dest++;
}

for (i = 0; i < n && *src; i++)
{
*dest = *src;
dest++;
src++;
}


*dest = '\0';

return (p);
}
