#include "main.h"
/**
*_strspn - A pointer to the string to be scanned.
*@s:A pointer to the string to be scanned.
*@accept: A pointer to the string of characters to be accepted.
*Return: the function returns the value of z.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int y = 0;
unsigned int z;

while (s[y] != '\0')
{
for (z = 0; accept[z] != '\0'; z++)
{
if (s[y] == accept[z])
{
break;
}
}

if (accept[z] == '\0')
{
break;
}

y++;
}

return (y);
}
