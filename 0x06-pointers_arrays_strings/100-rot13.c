#include "main.h"

/**
* rot13 - function that encodes a string using rot13.
* @str: string
* Return: string rotated
*/

char *rot13(char *str)
{
int i;
char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char storel[] = "nopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
{
str[i] = (str[i] - 65 > 25) ?
storel[str[i] - 97] : storeh[str[i] - 65];
}
}
return (str);
}
