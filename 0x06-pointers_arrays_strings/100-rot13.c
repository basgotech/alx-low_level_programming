#include "main.h"

/**
* rot13 - rotate characters 13 places
* @str: string
* Return: string rotated
*/
#include "main.h"

/**
* rot13 - rotate characters 13 places
* @str: string
* Return: string rotated
*/

char *rot13(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
            s[i] += 13;
        else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
            s[i] -= 13;
        i++;
    }
    return (s);
}
