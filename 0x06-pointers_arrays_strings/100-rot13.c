#include "main.h"

/**
* rot13 - rotate characters 13 places
* @s: string
* Return: string rotated
*/
char *rot13(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            s[i] = (s[i] - 'A' + 13) % 26 + 'A';
        i++;
    }
    return (s);
}
