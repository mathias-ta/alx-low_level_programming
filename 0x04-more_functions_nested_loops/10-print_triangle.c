#include "holberton.h"
#include <stdio.h>

/**
 *print_triangle - print a triangle
 *@size: size of the triangle
 *Return: void
 */

void print_triangle(int size)
{
int i = 1;
int j = size - 1;
int k = 1;

if (size > 0)
{
while (i <= size)
{
j = size - k;
while (j >= 1)
{
_putchar(' ');
j--;
}
k = size - j;
while (k >= 1)
{
_putchar('#');
k--;
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}


}
