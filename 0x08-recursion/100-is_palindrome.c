#include "main.h"

int palindrome(int i, char *s);

/**
 *length- length_count
 *@s: string
 *Return: length
 */
int length(char *s)
{
int i = 0;

if (*s)
{
i = i + length(s + 1);
return (i += 1);
}
return (0);
}
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

if (*s)
{
if (*s != s[length(s) - i])
{
return (0);
}
return (palindrome(i + 1, s + 1));
}
return (1);
}

