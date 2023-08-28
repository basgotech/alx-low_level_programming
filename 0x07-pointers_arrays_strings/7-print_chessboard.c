#include "main.h"

/**
 * print_chessboard - used to print 2d array elements.
 *@a: reperesents row of 2d array.
 */
void print_chessboard(char (*a)[8])
{

int y, z;

for (y = 0; y < 8; y++)
{
for (z = 0; z < 8; z++)
{
_putchar(a[y][z]);
}
_putchar('\n');
}

}
