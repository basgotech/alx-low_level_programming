#include "main.h"
#include <stdlib.h>
#include <string.h>

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

/**
 *argstostr - a function that concatenates all the
 *arguments of your program.
 *@ac: number of arguments.
 *@av: an array of pointers to the arguments
 *Return: a pointer to a new string that contains
 *all of the arguments
 */

char *argstostr(int ac, char **av)
{
int i, j, len;
char *new_str;
if (ac == 0 || av == NULL)
{
return (NULL);
}

len = 1;
for (i = 0; i < ac; i++)
{
len += strlen(av[i]) + 1;
}
new_str = malloc(len);
if (new_str == NULL)
{
return (NULL);
}

i = 0;
new_str[i] = '\0';
for (j = 0; j < ac; j++)
{
_strcat(new_str, av[j]);
_strcat(new_str, "\n");
}

return (new_str);
}
