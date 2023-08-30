#include "main.h"

int palindrome(int i, char *s);

/**
 *is_palindrome - is current value equal to the previous value
 *@s: string
 *Return: palindrome
 */
int is_palindrome(char *s)
{
int i = 1;

return (palindrome(i, s));
}

/**
 *palindrome - is current value equal to the previous value
 *@s: string
 *@i: palindrome status
 * Return: palindome
 */

int palindrome(int i, char *s)
{
int count = 0;

char *k = s;
while (*k != '\0')
{
count++;
k++;
}

if (*s)
{
if (*s != s[count - i])
{
return (0);
}
return (palindrome(i + 1, s + 1));
}
return (1);
}
