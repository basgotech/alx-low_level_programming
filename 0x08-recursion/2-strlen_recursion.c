#include "main.h"
/**
 *_strlen_recursion - a function that returns
 *the length of a string.
 *@s: value of string to count str len
 *Return: return word count
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
