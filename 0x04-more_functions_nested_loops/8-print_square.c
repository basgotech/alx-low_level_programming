#include "main.h"

/**
 *  * print_square - print square.
 *   * @size: The character to be checked.
 *    *
 *
 */
void print_square(int size)
{
int y, z;

if (size > 0)
{
for (y = 0; y < size; y++)
{
for (z = 0; z < size; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}

}
