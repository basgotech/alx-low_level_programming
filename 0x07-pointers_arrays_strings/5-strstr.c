#include "main.h"
#include <stdio.h>

/**
*_strstr - function returns a pointer to the first
*occurrence of the substring needle in the string haystack
*@haystack: A pointer to the string to be searched.
*@needle: A pointer to the substring to be searched for.
* Return: locates a substring..
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}

if (needle[j] == '\0')
{
return (&haystack[i]);
}
}

return (NULL);
}
