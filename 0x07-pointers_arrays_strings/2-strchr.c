#include "main.h"
/**
**_strchr - a function that locates a character in a string
*@s: a pointer to the string to be searched
*@c: a character in the string to be searched
*Return: returns a character
*/
char *_strchr(char *s, char c)
{
while (*s != (char) c)
{
if (!*s++)
{
return (NULL);
}
}
return ((char *)s);
}
