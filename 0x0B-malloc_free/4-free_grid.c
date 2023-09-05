#include "main.h"
#include <stdlib.h>
/**
 *free_grid - a function that frees a 2 dimensional
 *grid previously created by your
 *alloc_grid function.
 *@grid: is a pointer to the array of pointers
 *@height: is the number of rows in the array.
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}


for (i = 0; i < height; i++)
{
free(grid[i]);
}


free(grid);
}
