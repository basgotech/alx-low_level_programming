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
 * _strdup- a pointer to a newly allocated space in memory
 *@str: string
 *Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

i = 0;
len = 0;

if (str == NULL)
return (NULL);

len = _strlen(str);

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

while ((dup[i] = str[i]) != '\0')
i++;

return (dup);
}
