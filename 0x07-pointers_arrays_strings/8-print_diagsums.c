#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: square matrix of which print sum of diagonal
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int y;

unsigned int s, s1;

s = 0;
s1 = 0;

for (y = 0; y < size; y++)
{
s += a[(size * y) + y];
s1 += a[(size * (y + 1)) - (y + 1)];
}
printf("%d, %d\n", s, s1);
}
