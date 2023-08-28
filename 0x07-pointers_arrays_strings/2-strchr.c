#include "main.h"
/**
**_strchr - a function that locates a character in a string
*@s: a pointer to the string to be searched
*@c: a character in the string to be searched
*Return: returns a character
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}

}

return ("");

}
