#include "main.h"

static int len;

/**
 * print_binary - convert decimal value to binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
/** declare a variable to hold binary*/
int dtb;

if ((n == 0) & (len > 0))
{
return;
}
else if (n == 0)
{
_putchar('0');
return;
}
else
{
dtb = (n & 1);
n >>= 1;
len++;
print_binary(n);
_putchar('0' + dtb);
}

}
