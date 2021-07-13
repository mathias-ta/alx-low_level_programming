#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - concatinate two strings
 *@width: width of the grid
 *@height: height of the grid
 *Return: allocated grid
 */

int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
char **p;
if (width == NULL || height == NULL)
{
return (NULL);
}
p = malloc(sizeof(int) * (width) * (height) +1);
if (p == NULL)
{
return (NULL);
}
while (i < width)
{
while (j < height)
{
p[i][j] = 0;
j++;
}
j = 0;
i++;
}

}
