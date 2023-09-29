#include "main.h"

static int length;

/**
 * print_binary - convert decimal value to binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
int t;

if ((n == 0) & (length > 0))
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
t = (n & 1);
n >>= 1;
length++;
print_binary(n);
_putchar('0' + t);
}

}
