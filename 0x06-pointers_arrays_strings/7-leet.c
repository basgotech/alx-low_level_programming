#include "main.h"
/**
 *  * leet - function that encodes a string into 1337.
 *   * @str: string
 *   * Return: cap string
 */

char *leet(char *str)
{

int k;

for (k = 0; str[k]; k++)
{
if (str[k] == 'a' || str[k] == 'A')
{
str[k] = '4';
}
else if
(str[k] == 'e' || str[k] == 'E')
{
str[k] = '3';
}
else if
(str[k] == 'o' || str[k] == 'O')
{
str[k] = '0';
} else if
(str[k] == 't' || str[k] == 'T')
{
str[k] = '7';
}
else if
(str[k] == 'l' || str[k] == 'L')
{
str[k] = '1';
}
}

return (str);

}

