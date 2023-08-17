#include "main.h"

/**
 *  * print_triangle - print trianles using #.
 *   * @size: used to define th seize of the triangle.
 *    *
 *
 */
void print_triangle(int size)
{

int x, y, z;

if (size < 1)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = size - 1; y > x; y--)
{
_putchar(' ');
}
for (z = 0; z <= x; z++)
{
_putchar('#');
}
_putchar('\n');
}
}

}
