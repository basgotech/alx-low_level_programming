#include <stdlib.h>
#include "main.h"


/**
 * str_concat - the function calculates the length of the concatenated
 * string by adding the lengths of
 * the two input strings plus one for the
 * null terminator.
 * @s1: string one
 * @s2: string two
 * Return: concatinated string
*/
char *str_concat(char *s1, char *s2)
{

char *new_str;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
return (NULL);

i = 0;
j = 0;

if (s1)
{
while (i < len1)
{
new_str[i] = s1[i];
i++;
}
}

if (s2)
{
while (i < (len1 + len2))
{
new_str[i] = s2[j];
i++;
j++;
}
}
new_str[i] = '\0';

return (new_str);

}
