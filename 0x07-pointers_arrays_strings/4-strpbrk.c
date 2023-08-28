#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function returns a pointer to the first occurrence
 * of any character in the string accept in the string s
 *@s: A pointer to the string to be scanned.
 *@accept: pointer to the string of characters to be searched for.
 *Return: The function returns NULL if the end of the
 * string s is reached without finding a match.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, pos, flag = 0;
for (i = 0; s[i] != '\0'; i++)
{
pos = i;
}
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
{
if (j <= pos)
{
pos = j;
flag = 1;
}
}
}
}
if (flag == 1)
{
return (&s[pos]);
}
else
{
return (NULL);
}
}
