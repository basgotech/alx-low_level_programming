#include "main.h"
/**
*puts2 - print string value  -
*and skip the next value
*@str: store string value to be printed.
*
*/
void puts2(char *str)
{
int index_val = 0, len = 0;

char *i = str;
while (*i != '\0')
{
len++;
i++;
}

for (index_val = 0; index_val < len; index_val = index_val + 2)
{
_putchar(str[index_val]);
}



_putchar('\n');

}
