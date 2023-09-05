#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid- used to allocate grid
 *@width: width of 2d array
 *@height: height of 2d array
 *Return: allocated grid
*/
int **alloc_grid(int width, int height)
{

int **grid;
int i, j;
if (width < 1 || height < 1)
{
return (NULL);
}


grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}


for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
