#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a grid
 *@grid: grid to be freed
 *@height: height of the grid
 *Return: void
 */

void free_grid(int **grid, int height)
{
int i = 0, j = 0;
if (grid != NULL)
{
while (i < height)
{
while (p[i][j] != NULL)
{
free(p[i][j]);
j++;
}
j = 0;
i++;
}
}
}
