#include "main.h"
/**
*puts2 - print string value  -
*and skip the next value
*@str: store string value to be printed.
*
*/

void puts2(char *str)
{
int count;
char *i = str;
char *p;
while (*i != '\0')
{
count++;
i++;
}


for (p = str; *p; p += 2)
{
_putchar(*p);
}
_putchar('\n');

}
