#include "main.h"

/**
* rot13 - rotate characters 13 places
* @str: string
* Return: string rotated
*/

char *rot13(char *str)
{
int i;

for (i = 0; str[i]; i++) {
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = (str[i] - 'a' + 13) % 26 + 'a';
}
else if
(str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = (str[i] - 'A' + 13) % 26 + 'A';
}
}

return (str);
}
