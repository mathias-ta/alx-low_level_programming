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

while (j >= 1)
{
_putchar(' ');
j--;
}
j++;
while (k < size - 1)
{
_putchar('#');
}
k = j;
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}


}
