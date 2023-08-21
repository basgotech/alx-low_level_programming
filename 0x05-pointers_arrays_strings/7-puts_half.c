#include "main.h"
/**
*puts_half - print half of  string value stored in str -
*and print new line after that
*@str: store string value to be printed.
*
*/

void puts_half(char *str)
{
int index_val = 0, len = 0;

char *i = str;
int half;
while (*i != '\0')
{
len++;
i++;
}

half = len / 2;

for (index_val = half; index_val < len; index_val++)
{
_putchar(str[index_val]);
}



_putchar('\n');

}
