#include "main.h"

/**
 *  * print_line - Checks if a character is lowercase.
 *   * @n: The character to be checked.
 *    *
 *     *
 *
 */
void print_line(int n)
{
int j;

if (n < 1)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
_putchar('_');
}
_putchar('\n');
}

}


