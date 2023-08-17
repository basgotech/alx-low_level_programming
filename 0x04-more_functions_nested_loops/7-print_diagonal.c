#include "main.h"

/**
 *  * print_diagonal - Checks if a character is lowercase.
 *   * @c: The character to be checked.
 *    *
 *
 */
void print_diagonal(int c)
{

int y, z;

if (c < 1)
{
_putchar('\n');
}
else
{
for (y = 0; y < c; y++)
{
for (z = 0; z <= y; z++)
{
if (z != 0)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}

}
