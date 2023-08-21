#include "main.h"
/**
*print_rev - manipulate reverse string and -
*prints a string in reverse. followed by a new line.
*@s: store string value to be reversed.
*
*/
void print_rev(char *s)
{
int count = 0, index_val;

char *i = s;
while (*i != '\0')
{
count++;
i++;
}


for (index_val = count - 1; index_val >= 0; index_val--)
{
_putchar(s[index_val]);
}

_putchar('\n');
}
